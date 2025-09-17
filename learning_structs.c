#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Block {
    size_t count;    // Elements actually used
    size_t capacity; // Total elements allocated
    int arr[];
};

// Create array with given capacity
struct Block* create_array(size_t capacity) {
    struct Block *b = malloc(sizeof(struct Block) + capacity * sizeof(int));
    if (!b) return NULL;

    b->count = 0;     // Start with 0 elements filled
    b->capacity = capacity;  // But we have space for 'capacity' elements
    return b;
}

// Add an element (if there's space)
int add_element(struct Block *b, int value) {
    if (b->count >= b->capacity) {
        return 0; // Array full!
    }
    b->arr[b->count] = value;
    b->count++;
    return 1;
}

// Fill with random number of elements
void fill_randomly(struct Block *b, int max_elements) {
    srand(time(NULL));
    int elements_to_add = rand() % max_elements + 1;

    for (int i = 0; i < elements_to_add && i < b->capacity; i++) {
        add_element(b, rand() % 100);
    }
}

// Print array info
void print_array_info(struct Block *b) {
    printf("Capacity: %zu elements allocated\n", b->capacity);
    printf("Count:    %zu elements actually used\n", b->count);
    printf("Values:   ");
    for (size_t i = 0; i < b->count; i++) {
        printf("%d ", b->arr[i]);
    }
    printf("\n");
}

int main(void) {
    // Create array with capacity for 1000 elements
    struct Block *b = create_array(1000);

    // Fill with random number of elements (less than 1000)
    fill_randomly(b, 100);

    // Now we know exactly how many are actually used!
    print_array_info(b);

    printf("We allocated %zu elements but only used %zu of them!\n",
           b->capacity, b->count);

    free(b);
    return 0;
}
