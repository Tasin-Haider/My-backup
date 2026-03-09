#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to shuffle an array using Fisher-Yates
void shuffle(int *array, int n) {
    if (n > 1) {
        for (int i = n - 1; i > 0; i--) {
            // Pick a random index from 0 to i
            int j = rand() % (i + 1);

            // Swap array[i] with array[j]
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
}

int main() {
    int SIZE;
    printf("Enter a size: ");
    scanf("%d",&SIZE);
    int arr[SIZE];
    for(int i=0;i<=SIZE;i++){
        arr[i]=i;
    }
    int n=SIZE;
    // Seed the random number generator with current time
    srand(time(NULL)+69);
    shuffle(arr, n);
    printf("\nShuffled array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
