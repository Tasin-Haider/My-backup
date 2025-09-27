#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+2];
    arr[0]=0;
    arr[1]=1;
    for(int i=0;i<=n;i++){
        arr[i+2]=arr[i]+arr[i+1];
        printf("\n%d: %d",i,arr[i]);
    }
    return 0;
}
