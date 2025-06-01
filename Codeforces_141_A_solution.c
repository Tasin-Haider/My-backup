#include <stdio.h>
#include <string.h>

int main() {
    char nm1[100];
    scanf("%s",nm1);
    char nm2[100];
    scanf("%s",nm2);
    char fnl[100];
    scanf("%s",fnl);
    int chk1=0;
    int chk2=0;
    for(int i=0;i<strlen(nm1);i++){
        for(int k=0;k<strlen(fnl);k++){
            if(nm1[i]==fnl[k]){
                chk1++;
                k=strlen(fnl);
            }
        }
    }
    for(int i=0;i<strlen(nm2);i++){
        for(int k=0;k<strlen(fnl);k++){
            if(nm2[i]==fnl[k]){
                chk2++;
                k=strlen(fnl);
            }
        }
    }
    printf("%d\n%d\n",chk1,chk2);
    if(chk1>=strlen(nm1)&&chk2>=strlen(nm2)&& chk1+chk2==strlen(fnl)){
        printf("YES");
        return 0;
    }
    printf("NO");
}
