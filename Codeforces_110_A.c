#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    long long int a=0;
    int zc=0;
    int four_count=0, seven_count=0;
    scanf("%lld",&a);
    zc=log10(a)+1;
    int *arr = malloc(zc*sizeof(int));
    //printf("%d",zc);
    for(int i=0;i<zc;i++){
        int digit=a%10;
        arr[i]=digit;
        //printf("\n%d\n",digit);
        a=a/10;
    }
    for(int i=0;i<zc;i++){
        if(arr[i]==4){
            four_count++;
        }
        if(arr[i]==7){
            seven_count++;
        }
    }
    if(four_count+seven_count==4||four_count+seven_count==7){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
    free(arr);
}

