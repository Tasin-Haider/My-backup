#include <stdio.h>

int main(){
    int weight_limak;
    int weight_brother;
    scanf("%d %d",&weight_limak,&weight_brother);
    int years =0;
    while (weight_limak<=weight_brother)
    {
        weight_limak = weight_limak*3;
        weight_brother = weight_brother*2;
        years++;
    }
    printf("%d", years);
}