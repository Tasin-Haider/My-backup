#include <stdio.h>
#include <string.h>

void delfind(char *arr, int index) {
    int len = strlen(arr);
    for (int i=index;i<len;i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    char fnl[200];
    fgets(fnl,200,stdin);
    char st1[200];
    int chk1=0;
    fgets(st1,200,stdin);
    for(int i=0;i<strlen(st1);i++){
        for(int k=0;k<strlen(fnl);k++){
            if(st1[i]==fnl[k] && st1[i]==' ' && fnl[k]==' '){
                k=strlen(fnl);
                chk1++;
            }
            if(st1[i]==fnl[k]){
                delfind(fnl,k);
                chk1++;
                /*printf("%s\n",fnl);*/
                k=strlen(fnl);
            }
        }
    }
    /*printf("Chars matched: %d against the strlen of st1 of %d",chk1,strlen(st1));*/
    if(chk1>=strlen(st1)){
        printf("YES");
        return 0;
    }
    printf("NO");
}
