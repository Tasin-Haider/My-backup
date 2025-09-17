#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numbers=0;
	printf("Enter the amount for how many numbers you want to find max of:");
	scanf("%d",&numbers);
	if(numbers<=0){
	    printf("Please enter valid amount of numbers");
	    return 0;
	}
	int *num_arr = malloc(numbers*sizeof(int));
	for(int i=0; i<numbers; i++) {
		scanf("%d",&num_arr[i]);
	}
	int max=num_arr[0];
	for(int i=0; i<numbers-1; i++) {
		if(max<num_arr[i]) {
			max=num_arr[i];
		}
	}
	if(num_arr[numbers-1]>max) {
		max=num_arr[numbers-1];
	}
	printf("\nMaximum of the %d numbers is %d",numbers,max);
    free(num_arr);
	return 0;
}