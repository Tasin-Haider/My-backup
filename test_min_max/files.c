#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_ints(const void *a, const void *b) {
    return -((*(int*)a - *(int*)b));
}

int main()
{
    FILE *fnumber = fopen("random_numbers.txt","r");
    if(fnumber==NULL){
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    int numbers=0;
    printf("Enter the amount for how many numbers you want to find min/max of:");
    scanf("%d",&numbers);
    if(numbers<=0){
        printf("\nPlease enter a valid number");
        exit(EXIT_FAILURE);
    }
    int *num_arr = malloc(numbers*sizeof(int));
    int count=0;
    printf("Enter numbers: ");
    do{
        fscanf(fnumber,"%d",&num_arr[count]);
        count++;
    }
    while(count<numbers);
    qsort(num_arr,numbers,sizeof(int),compare_ints);
    printf("\nThe max is: %d",num_arr[0]);
    printf("\nThe min is: %d",num_arr[numbers-1]);
    free(num_arr);
    fclose(fnumber);
    return 0;
}
