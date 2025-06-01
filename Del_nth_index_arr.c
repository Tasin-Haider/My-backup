#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *arr = malloc(1000000 * sizeof(char));
    if(arr == NULL){
        printf("MEM allocation failed");
        return 1;
    }
    printf("Enter String: ");
    scanf("%s", arr);
    printf("Taken as: %s\n",arr);
    int ind=0;
    int len=strlen(arr);
    printf("Enter index to be deleted: ");
    scanf("%d",&ind);
    for(int i=ind-1;i<len;i++){
        arr[i]=arr[i+1];
    }
    printf("Returned as: %s",arr);
    free(arr);
}
