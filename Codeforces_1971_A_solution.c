#include <stdio.h>

int main(){
    int tst_c;
    int a = 0;
    int b = 0;
    scanf("%d",&tst_c);
    for (int i=0;i<tst_c;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        if(a==b){
            printf("%d %d\n",a,b);
        }
        if(a>b){
          printf("%d %d\n",b,a);
        }
        if(b>a){
            printf("%d %d\n",a,b);
        }
    }
}