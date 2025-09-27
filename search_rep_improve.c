#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    size_t cursor;
    int arr[];

}REPEATATION_LIST;

REPEATATION_LIST *search_reps(char *arr, char c){
    int rep_c=0,index_cursor=0;
    int len=strlen(arr);
    int *index_list = malloc(len*sizeof(int));
    for(int i=0;i<len;i++){
        if(arr[i]==c){
            rep_c++;
            if(i==len-1 || arr[i+1]!=c){
                index_list[index_cursor++]=rep_c;
                rep_c=0;
            }
        }
    }
    REPEATATION_LIST *list1 = malloc(sizeof(REPEATATION_LIST)+index_cursor*sizeof(int));
    if(!list1){
        free(index_list);
        return NULL;
    }
    list1->cursor=index_cursor;
    memcpy(list1->arr, index_list,index_cursor*sizeof(int));
    free(index_list);
    return list1;
}

int main(){
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
}
