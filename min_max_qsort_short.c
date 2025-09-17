#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_ints(const void *a, const void *b) {
    return -((*(int*)a - *(int*)b));
}

int main()
{
    int numbers=0;
    printf("Enter the amount for how many numbers you want to find min/max of:");
    scanf("%d",&numbers);
    if(numbers<=0){
        printf("\nPlease enter a valid number");
        exit(EXIT_FAILURE);
    }
    int *num_arr = malloc(numbers*sizeof(int));
    printf("Enter numbers: ");
	for(int i=0; i<numbers; i++) {
		scanf("%d",&num_arr[i]);
	}
    qsort(num_arr,numbers,sizeof(int),compare_ints);
    printf("\nThe max is: %d",num_arr[0]);
    printf("\nThe min is: %d",num_arr[numbers-1]);
    free(num_arr);
    return 0;
}
