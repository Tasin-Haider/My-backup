#include <stdio.h>
#include <stdio.h>

void spsstrcpy(char a[], char b[], int c){
    for(int i=0;i!=c+1;i++){
        b[i]=a[i];
    }
    b[c+1]='\0';
}

int main() {
    char a[5000];
    int x;
    char bft[5000]={0};
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter [Index]");
    scanf("%d",&x);
    printf("Taken as: %s",a);
    spsstrcpy(a, bft, x);
    printf("%s",bft);
    return 0;
}
