#include <stdio.h>

int main() {
    long long sum1=0;
    long long rs=0;
    long long mis=0;
    long long in;
    scanf("%lld",&in);
    long long arr[in];
    for(long long i=0;i<in-1;i++){
        scanf("%lld",&arr[i]);
    }
    for(long long i=0;i<in+1;i++){
        rs+=i;
    }
    for(long long i=0;i<in-1;i++){
        sum1+=arr[i];
    }
    //printf("%lld %lld",sum1,rs);
    mis=rs-sum1;
    printf("\n%lld",mis);
    return 0;
}
