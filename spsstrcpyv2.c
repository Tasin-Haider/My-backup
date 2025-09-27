#include <stdio.h>

void spsstrcpyv2(char a[], char b[], int c, int d){
    int j=0;
    for(int i=c;i!=d+1;i++){
        b[j]=a[i];
        //printf("\n %d %d",j,i);
        j++;
    }
    b[j]='\0';
    j=0;
}

int main() {
    int c,d;
    char a[5000];
    char bft[5000]={0};
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin);
    printf("Copy from[Index]: ");
    scanf("%d",&c);
    printf("Copy to[Index]: ");
    scanf("%d",&d);
    printf("Taken as: %s",a);
    spsstrcpyv2(a, bft, c, d);
    printf("%s",bft);
    return 0;
}
