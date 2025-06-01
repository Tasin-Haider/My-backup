#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_to(int a){
    if (a<=9){
        return a;
    }
    else{
        int i =0;
        char a_ar[100];
        while (a > 0){
         a_ar[i++] = (a % 10) + '0'; 
         a /= 10;
        }
        a_ar[i] = '\0';
        for (int i=0;i<strlen(a_ar);i++){
            printf("%c",a_ar[i]);
        }
    }
}

int main() {
    int t_c;
    scanf("%d",&t_c);
    int a[1000];
    for (int i=0;i<t_c;i++){
        scanf("%d",&a[i]);
    }
    add_to(12);

    return 0;
}