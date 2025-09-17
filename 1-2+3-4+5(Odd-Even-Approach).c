#include<stdio.h>
int main()
{
    printf("Enter n:");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        if(i%2==1){
            sum+=i;
        }
    }
    printf("Sum: %d",sum);
    return 0;
}
