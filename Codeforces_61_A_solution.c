#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    char *arr1 = malloc(110*sizeof(char));
    char *arr2 = malloc(110*sizeof(char));
    char *arr3 = malloc(110*sizeof(char));
    scanf("%s",arr1);
    scanf("%s",arr2);
    int zero_count=strlen(arr1);
    //printf("Zero Count: %d\n",zero_count);
    for(int i=0;i<zero_count;i++){
        if(arr1[i]==arr2[i]){
            arr3[i]='0';
        }
        else{
            arr3[i]='1';
        }
    }
    printf("%.*s",zero_count,arr3);
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}
