#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void revstr(char *arr){
    int len=strlen(arr);
    char *arrcp = malloc(len * sizeof(char));
    strcpy(arrcp, arr);
    for(int i=0;i<len;i++){
        arr[len-i-1]=arrcp[i];
    }
    free(arrcp);
}

int main() {
    char *arr = malloc(1000000 * sizeof(char));
    if(arr == NULL){
        printf("MEM allocation failed");
        return 1;
    }
    printf("Enter String: ");
    scanf("%s", arr);
    printf("Taken as: %s\n",arr);
    revstr(arr);
    printf("Returned as: %s",arr);
    free(arr);
}
