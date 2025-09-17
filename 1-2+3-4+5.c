#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter n:");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i*pow(-1,i-1);
    }
    printf("Sum: %d",sum);
    return 0;
}
