#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b) {
    return -((*(int*)a - *(int*)b));
}

int main()
{
    int numbers=0;
    scanf("%d",&numbers);
    if(numbers<=0){
        printf("Please enter a valid numbe");
        exit(EXIT_FAILURE);
    }
    int *num_arr = malloc(numbers*sizeof(int));
	for(int i=0; i<numbers; i++) {
		scanf("%d",&num_arr[i]);
	}
    qsort(num_arr,numbers,sizeof(int),compare_ints);
    int max=num_arr[0];
    printf("Max: %d",max);
    free(num_arr);
    return 0;
}