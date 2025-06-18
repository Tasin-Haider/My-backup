#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void spsstrcpyv2(const char a[], char b[], int c, int d) {
    int j = 0;
    for (int i = c; i <= d && a[i] != '\0'; i++) {
        b[j++] = a[i];
    }
    b[j] = '\0';
}

int main(){

    char *arr = malloc(100000000 * sizeof(char));
    char *subarr = malloc(100000000 * sizeof(char));
     if(arr == NULL || subarr == NULL){
        printf("MEM allocation failed");
        return 1;
    }
    printf("Enter String: ");
    scanf("%s",arr);
    printf("Enter Sub String: ");
    scanf("%s",subarr);
    printf("String Taken as: %s\n",arr);
    printf("Sub string Taken as: %s\n",subarr);
    int len=strlen(arr);
    int h1=0;
    int incr=strlen(subarr)-1;
    int h2=incr;
    char *buff = malloc((strlen(subarr)+1) * sizeof(char));
    for(int i=0;h2<len;i++){
        spsstrcpyv2(arr,buff,h1,h2);
        if(strcasecmp(buff,subarr)==0){
            printf("Match found from index %d to index %d",h1,h2);
            return 0;
        }
         h1++;
         h2++;
    }
    free(arr);
    free(subarr);
    free(buff);
}
