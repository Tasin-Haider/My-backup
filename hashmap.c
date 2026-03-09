#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// Key-Value pair structure
typedef struct Pair {
    char* key;
    void* value;
    struct Pair* next;  // For separate chaining
} Pair;

// Hash map structure
typedef struct {
    Pair** buckets;     // Array of pointers to Pairs
    size_t capacity;    // Number of buckets
    size_t size;        // Number of key-value pairs
    size_t value_size;  // Size of value type in bytes
} HashMap;

// DJB2 hash function (popular for strings)
static uint32_t hash_function(const char* key, size_t capacity) {
    uint32_t hash = 5381;
    int c;

    while ((c = *key++)) {
        hash = ((hash << 5) + hash) + c;  // hash * 33 + c
    }

    return hash % capacity;
}

// Create a new hash map
HashMap* hashmap_create(size_t initial_capacity, size_t value_size) {
    HashMap* map = malloc(sizeof(HashMap));
    if (!map) return NULL;

    map->capacity = initial_capacity > 0 ? initial_capacity : 16;
    map->size = 0;
    map->value_size = value_size;

    // Allocate buckets array (initialize to NULL)
    map->buckets = calloc(map->capacity, sizeof(Pair*));
    if (!map->buckets) {
        free(map);
        return NULL;
    }

    return map;
}

// Destroy the hash map and free all memory
void hashmap_destroy(HashMap* map) {
    if (!map) return;

    // Free all pairs in all buckets
    for (size_t i = 0; i < map->capacity; i++) {
        Pair* current = map->buckets[i];
        while (current) {
            Pair* next = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = next;
        }
    }

    free(map->buckets);
    free(map);
}

// Resize the hash map when load factor is too high
static void hashmap_resize(HashMap* map, size_t new_capacity) {
    Pair** new_buckets = calloc(new_capacity, sizeof(Pair*));
    if (!new_buckets) return;

    // Rehash all existing elements
    for (size_t i = 0; i < map->capacity; i++) {
        Pair* current = map->buckets[i];
        while (current) {
            Pair* next = current->next;

            // Recompute hash for new capacity
            uint32_t new_index = hash_function(current->key, new_capacity);

            // Insert at head of new bucket
            current->next = new_buckets[new_index];
            new_buckets[new_index] = current;

            current = next;
        }
    }

    free(map->buckets);
    map->buckets = new_buckets;
    map->capacity = new_capacity;
}

// Insert or update a key-value pair
int hashmap_put(HashMap* map, const char* key, const void* value) {
    if (!map || !key) return 0;

    // Resize if load factor > 0.75
    if (map->size >= map->capacity * 0.75) {
        hashmap_resize(map, map->capacity * 2);
    }

    uint32_t index = hash_function(key, map->capacity);

    // Check if key already exists
    Pair* current = map->buckets[index];
    while (current) {
        if (strcmp(current->key, key) == 0) {
            // Update existing value
            memcpy(current->value, value, map->value_size);
            return 1;
        }
        current = current->next;
    }

    // Create new pair
    Pair* new_pair = malloc(sizeof(Pair));
    if (!new_pair) return 0;

    // Allocate and copy key
    new_pair->key = malloc(strlen(key) + 1);
    if (!new_pair->key) {
        free(new_pair);
        return 0;
    }
    strcpy(new_pair->key, key);

    // Allocate and copy value
    new_pair->value = malloc(map->value_size);
    if (!new_pair->value) {
        free(new_pair->key);
        free(new_pair);
        return 0;
    }
    memcpy(new_pair->value, value, map->value_size);

    // Insert at head of bucket
    new_pair->next = map->buckets[index];
    map->buckets[index] = new_pair;
    map->size++;

    return 1;
}

// Get value by key
void* hashmap_get(HashMap* map, const char* key) {
    if (!map || !key) return NULL;

    uint32_t index = hash_function(key, map->capacity);
    Pair* current = map->buckets[index];

    while (current) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    return NULL;  // Key not found
}

// Remove a key-value pair
int hashmap_remove(HashMap* map, const char* key) {
    if (!map || !key) return 0;

    uint32_t index = hash_function(key, map->capacity);
    Pair* current = map->buckets[index];
    Pair* prev = NULL;

    while (current) {
        if (strcmp(current->key, key) == 0) {
            // Remove the pair
            if (prev) {
                prev->next = current->next;
            } else {
                map->buckets[index] = current->next;
            }

            free(current->key);
            free(current->value);
            free(current);
            map->size--;
            return 1;
        }
        prev = current;
        current = current->next;
    }

    return 0;  // Key not found
}

// Check if key exists
int hashmap_contains(HashMap* map, const char* key) {
    return hashmap_get(map, key) != NULL;
}

// Get number of key-value pairs
size_t hashmap_size(HashMap* map) {
    return map ? map->size : 0;
}

// Clear all entries
void hashmap_clear(HashMap* map) {
    if (!map) return;

    for (size_t i = 0; i < map->capacity; i++) {
        Pair* current = map->buckets[i];
        while (current) {
            Pair* next = current->next;
            free(current->key);
            free(current->value);
            free(current);
            current = next;
        }
        map->buckets[i] = NULL;
    }
    map->size = 0;
}

typedef struct {
    HashMap* map;
    size_t bucket_index;
    Pair* current_pair;
} HashMapIterator;

HashMapIterator hashmap_iterator(HashMap* map) {
    HashMapIterator it = {map, 0, NULL};

    // Find first non-empty bucket
    while (it.bucket_index < map->capacity &&
           !map->buckets[it.bucket_index]) {
        it.bucket_index++;
    }

    if (it.bucket_index < map->capacity) {
        it.current_pair = map->buckets[it.bucket_index];
    }

    return it;
}

int hashmap_next(HashMapIterator* it, char** key, void** value) {
    if (!it->map || !it->current_pair) return 0;

    *key = it->current_pair->key;
    *value = it->current_pair->value;

    // Move to next pair
    it->current_pair = it->current_pair->next;

    // If no more pairs in current bucket, find next bucket
    while (!it->current_pair &&
           ++it->bucket_index < it->map->capacity) {
        it->current_pair = it->map->buckets[it->bucket_index];
    }

    return 1;
}

int main() {

    // Create hash map for integers
    HashMap* map = hashmap_create(8, sizeof(int));

    // Insert values
    int values[] = {10, 20, 30, 40};
    hashmap_put(map, "Alice", &values[0]);
    hashmap_put(map, "Bob", &values[1]);
    hashmap_put(map, "Charlie", &values[2]);
    hashmap_put(map, "Alice", &values[3]);  // Update Alice

    // Retrieve values
    int* alice_age = hashmap_get(map, "Alice");
    if (alice_age) {
        printf("Alice: %d\n", *alice_age);  // Output: Alice: 40
    }

    // Check contains
    if (hashmap_contains(map, "Bob")) {
        printf("Bob is in the map\n");
    }

    // Iterate through all entries
    HashMapIterator it = hashmap_iterator(map);
    char* key;
    void* value;
    printf("All entries:\n");
    while (hashmap_next(&it, &key, &value)) {
        printf("  %s: %d\n", key, *(int*)value);
    }

    // Remove an entry
    hashmap_remove(map, "Charlie");

    // Clean up
    hashmap_destroy(map);

    return 0;
}
