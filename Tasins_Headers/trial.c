#include "INT_ARR.h"
#include "haiders_stringlib.h"

int main(void) {
    INT_ARR *arr1 = initialize_arrays(100);
    fill_randomly_upto(arr1, 100, 50);
    print_INT_ARR_status(arr1);
    char *arr = malloc(100000*sizeof(char));
    char c;
    printf("Enter a string: ");
    scanf("%s",arr);
    printf("Enter char to be searched: ");
    scanf(" %c",&c);
    REPEATATION_LIST *list1=search_reps(arr,c);
    printf("List size should be %zu\n",list1->cursor);
    for(int i=0;i<(int)list1->cursor;i++){
        printf("%d ",list1->arr[i]);
    }
    free(arr);
    free(arr1);
    return 0;
}
