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
    if(indices[0]==-1&&indices[1]==-1){
        printf("Substring %s does not exist in string %s\n",subarr,arr);
    }
    printf("Match found from index %d to index %d\n",indices[0],indices[1]);
    REPEATATION_LIST *list1=search_reps(arr,c);
    printf("List size should be %zu\n",list1->cursor);
    for(int i=0;i<(int)list1->cursor;i++){
        printf("%d ",list1->arr[i]);
    }
    printf("Reversed string: %s\n",revstr(arr));
    int n1,n2;
    printf("Enter index to be deleted: ");
    scanf("%d",&n1);
    delfind(arr,n1);
    printf("After %d th index was deleted, The string is: %s\n",n1,arr);
    printf("Enter index to be deleted from: ");
    scanf("%d",&n1);
    printf("Enter index to delete upto: ");
    scanf("%d",&n2);
    delftind(arr,n1,n2);
    printf("After %d th- %d th index was removed, The string is: %s\n",n1,n2,arr);
    free(arr);
    free(subarr);
    free(arr1);
    return 0;
}
