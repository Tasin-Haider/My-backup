#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int k=0;

int main() {
    char *dna = malloc(1000001 * sizeof(char));
    if (dna == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int rep =1;
    int *repar = malloc(1000001 * sizeof(int));
    if (repar == NULL) {
        printf("Memory allocation failed!\n");
        free(dna);
        return 1;
    }
    scanf("%999999s", dna);
    char f=dna[0];
    for(int i=1;i<strlen(dna);i++){
        if(dna[i]!=f){
            repar[k] = rep;
            k++;
            rep=1;
            f=dna[i];
        }
        else
            rep++;
    }
    repar[k]=rep;
    int max=repar[0];
    for(int i=0;i<=k;i++){
        if(repar[i]>max){
            max=repar[i];
        }
    }
    printf("%d",max);
    free(dna);
    free(repar);
    return 0;
}
