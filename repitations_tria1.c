#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *dna = malloc(1000000 * sizeof(char));
    if (dna == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int a=0;
    int c=0;
    int g=0;
    int t=0;
    scanf("%999999s", dna);
    for(int i=0;i<strlen(dna);i++){
        if(dna[i]=='A'){
            a++;
        }
        else if(dna[i]=='C'){
            c++;
        }
        else if(dna[i]=='G'){
            g++;
        }
        else if(dna[i]=='T'){
            t++;
        }
    }
    if(a>c&&a>g&&a>t){
        printf("%d",a);
    }
    else if(c>a&&c>g&&c>t){
        printf("%d",c);
    }
    else if(g>a&&g>c&&g>t){
        printf("%d",g);
    }
    else if(t>c&&t>g&&t>a){
        printf("%d",t);
    }
    free(dna);
    return 0;
}
