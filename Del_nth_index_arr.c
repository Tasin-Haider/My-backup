#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *delfind(char *arr,int ind){
    int len=strlen(arr);
    for(int i=ind;i<len;i++){
        arr[i]=arr[i+1];
    }
    return arr;
}

int main() {
    char *arr = malloc(1000000 * sizeof(char));
    if(arr == NULL){
        printf("MEM allocation failed");
        return 1;
    }
    printf("Enter String: ");
    fgets(arr,100000,stdin);
    printf("Taken as: %s\n",arr);
    int ind=0;
    printf("Enter index to be deleted: ");
    scanf("%d",&ind);
    char *fin_arr = delfind(arr,ind);
    printf("Returned as: %s",fin_arr);
    free(arr);
    free(fin_arr);
}
