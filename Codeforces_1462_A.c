#include<stdio.h>

int main(){
    int t=0,n=0;
    char arr[300];
    char arr_fix[300];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int cpy=n+2,cpu=-2;
        scanf("%s",arr);
        for(int k=0;k<n;k++){
            if(k%2==0){
                arr_fix[k]=arr[cpy-2];
            }
            else
                arr_fix[k]=arr[cpu+2];
        }
    }
    printf("%s",arr_fix);
}
