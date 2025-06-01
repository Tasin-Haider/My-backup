#include <stdio.h>
#include <string.h>

int smchcnt;

int cksstr(char a[11]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==a[i+1]){
            smchcnt++;
        }
        
    }
    return smchcnt;
}


int main(){
    int tst_c;
    scanf("%d",&tst_c);
    char a[11];
    for(int i=0;i<tst_c;i++){
       scanf("%s",a);
       char dumarr[11];
       if(cksstr(a)==strlen(a)-1 || strlen(a)==1){
        printf("NO\n");
       }
       else{
        printf("YES\n");
        for(int i=strlen(a);i!=-1;i--){
            printf("%c",a[i]);
        }
        printf("\n");
        
       }
       
    }
    //printf("\n%d",smchcnt);
    //printf("%d", strlen(a));
    exit:
    return 0;
}