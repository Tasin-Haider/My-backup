#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strip_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0';
    }
}

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
    char *arr = malloc(10000*sizeof(char));
    fgets(arr,10000,stdin);
    strip_newline(arr);
    int char_density[26]={0};
    int cursor=0;
    int uc=0;
    for(int i=97;i<=122;i++){
        REPEATATION_LIST *list1=search_reps(arr,(char)i);
        int total = 0;
        for(size_t j=0; j<list1->cursor; j++){
            total += list1->arr[j];
            }
        char_density[cursor++] = total;
    }
    for(int i=0;i<26;i++){
        //printf("%d ",char_density[i]);
        if(char_density[i]>0){
            uc++;
        }
    }
    printf("%d",uc);
    free(arr);
}
