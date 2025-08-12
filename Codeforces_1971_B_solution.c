#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char cp[101];

char *movind(char *arr, int len){
    int cnt=0;
    char temp=arr[0];
    for(int i=1;i<len;i++){
        cp[cnt++]=arr[i];
    }
    cp[cnt++]=temp;
    cp[cnt]='\0';
    return cp;
}

int chkscharr(char *arr){
    char temp=arr[0];
    int len=strlen(arr);
    int i;
    for(i=0;i<len;i++){
        if(arr[i]!=temp){
            break;
        }
    }
    return i;
}

int main(){
    int tms=0;
    scanf("%d",&tms);
    char *warr[tms];
    for(int i=0;i<tms;i++){
        warr[i] = malloc(101 * sizeof(char));
        scanf("%s",warr[i]);
    }
    for(int i=0;i<tms;i++){
        int len=strlen(warr[i]);
        if(chkscharr(warr[i])!=len){
            printf("YES\n");
            printf("%s\n",movind(warr[i],len));
        }
        else
            printf("NO\n");
    }
    //printf("%d",chkscharr("aaaab"));
    //printf("%s",movind("Hello",5));
    for(int i=0;i<tms;i++){
        free(warr[i]);
    }
}
