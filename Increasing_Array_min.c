#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int *arey = malloc(250000 * sizeof(long long int));
    if (arey == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
    }
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&arey[i]);
    }
    long long int moves=0;
    for(int i=1;i<n;i++){
        if(arey[i-1]>arey[i]){
            while(arey[i]!=arey[i-1]){
             arey[i]++;
             moves++;
            }
        }
    }
    printf("%lld",moves);

    free(arey);
}
