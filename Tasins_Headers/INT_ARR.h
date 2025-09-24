#ifndef INT_ARRAY_H
#define INT_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    size_t count;    // Elements actually used
    size_t capacity; // Total elements allocated
    int arr[];
} INT_ARR;

// Function declarations
INT_ARR *initialize_arrays(int capacity);
int add_element(INT_ARR *arr1, int val);
void fill_randomly_upto(INT_ARR *arr1, int max, int up_to);
void print_INT_ARR_status(INT_ARR *arr1);

// Function implementations
INT_ARR *initialize_arrays(int capacity) {
    INT_ARR *arr1 = malloc(sizeof(INT_ARR) + capacity * sizeof(int));
    if (!arr1) return NULL;
    arr1->capacity = capacity;
    arr1->count = 0;
    return arr1;
}

int add_element(INT_ARR *arr1, int val) {
    if (arr1->count >= arr1->capacity) {
        return 0; // Array full!
    }
    arr1->arr[arr1->count] = val;
    arr1->count++;
    return 1;
}

void fill_randomly_upto(INT_ARR *arr1, int max, int up_to) {
    static int seeded = 0;
    if (!seeded) {
        srand(time(NULL));
        seeded = 1;
    }
    if (up_to > arr1->capacity) {
        up_to = arr1->capacity;
    }
    for (int i = 0; i < up_to; i++) {
        add_element(arr1, rand() % max + 1);
    }
}

void print_INT_ARR_status(INT_ARR *arr1) {
    printf("Currently used elements: %zu", arr1->count);
    printf("\nElements the array can hold at max: %zu\n", arr1->capacity);
    printf("Elements: \n");
    for (int i = 0; i < (int)arr1->count; i++) {
        printf("%d, ", arr1->arr[i]);
    }
    printf("\n");
}

#endif // INT_ARRAY_H
