#include "INT_ARR.h"
#include "haiders_stringlib.h"

int main(void) {
    INT_ARR *arr1 = initialize_arrays(100);
    fill_randomly_upto(arr1, 100, 50);
    print_INT_ARR_status(arr1);
    char *arr = malloc(100*sizeof(char));
    char *subarr = malloc(100*sizeof(char));
    char c;
     if(arr == NULL || subarr == NULL){
        printf("MEM allocation failed");
        return 1;
    }
    printf("Enter String: ");
    fgets(arr,99,stdin);
    printf("Enter Sub String: ");
    fgets(subarr,99,stdin);
    printf("Enter Char: ");
    scanf(" %c",&c);
    printf("String Taken as: %s\n",arr);
    printf("Sub string Taken as: %s\n",subarr);
    int *indices = searchsubstr(arr,subarr);
    printf("Match found from index %d to index %d\n",indices[0],indices[1]);
    REPEATATION_LIST *list1=search_reps(arr,c);
    printf("List size should be %zu\n",list1->cursor);
    for(int i=0;i<(int)list1->cursor;i++){
        printf("%d ",list1->arr[i]);
    }
    free(arr);
    free(subarr);
    free(arr1);
    return 0;
}
