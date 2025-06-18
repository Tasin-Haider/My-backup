#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *arr = malloc(10000000 * sizeof(char));
    if(arr == NULL){
        printf("MEM allocation failed");
        return 1;
    }
    printf("Enter String: ");
    scanf("%s", arr);
    printf("Taken as: %s\n",arr);
    int stind=0;
    int edind=0;
    int len=strlen(arr);
    printf("Enter index to be deleted from: ");
    scanf("%d",&stind);
    printf("Enter index to be deleted to: ");
    scanf("%d",&edind);
    char *arrcp = malloc((len+1)*sizeof(char));
    strcpy(arrcp,arr);
    int i=0;
    for(i=stind-1;i<len-1;i++){
        arr[i]=arrcp[edind++];
    }
    arr[i] = '\0';
    printf("Returned as: %s",arr);
    free(arr);
    free(arrcp);
}
