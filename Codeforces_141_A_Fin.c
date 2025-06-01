#include <stdio.h>
#include <string.h>

void delfind(char *arr, int index) {
    int len = strlen(arr);
    for (int i=index;i<len;i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    char nm1[100];
    scanf("%s",nm1);
    char nm2[100];
    scanf("%s",nm2);
    char fnl[100];
    scanf("%s",fnl);
    int inl= strlen(fnl);
    int chk1=0;
    int chk2=0;
    for(int i=0;i<strlen(nm1);i++){
        for(int k=0;k<strlen(fnl);k++){
            if(nm1[i]==fnl[k]){
                chk1++;
                delfind(fnl,k);
                /*printf("%s\n",fnl);*/
                k=strlen(fnl);
            }
        }
    }
    for(int i=0;i<strlen(nm2);i++){
        for(int k=0;k<strlen(fnl);k++){
            if(nm2[i]==fnl[k]){
                chk2++;
                delfind(fnl,k);
                /*printf("%s\n",fnl);*/
                k=strlen(fnl);
            }
        }
    }
    if(chk1+chk2==inl && chk1==strlen(nm1) && chk2==strlen(nm2)){
        printf("YES");
        return 0;
    }
    printf("NO");
}
