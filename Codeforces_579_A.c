#include<stdio.h>
#include<math.h>

int main(){
    int n=0,bacterium=1;
    scanf("%d",&n);
    while(n>1){
        if(n%2==0){
            n=n/2;
        }
        else if(n%2==1){
            bacterium++;
            n=floor(n/2);
        }
    }
    printf("%d",bacterium);
    return 0;
}

