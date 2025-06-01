#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[500];
    char carr[20] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
    char na[500];
    scanf("%s",a);
    int len = strlen(a);
    for(int i=0;i<len;i++){
        a[i] = tolower(a[i]);
    }
    for(int i=0;i<len;i++){
        for(int j=0;j!=20;j++){
            if(a[i]==carr[j]){
                printf(".%c",a[i]);
                break;
            }
        }
    }

    return 0;
}