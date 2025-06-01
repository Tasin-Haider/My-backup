#include <stdio.h>
#include <string.h>

int main() {
    char inp[101];
    scanf("%s",inp);
    for(int i=0;i<strlen(inp);i++){
        if(inp[i]=='H' || inp[i]=='Q' || inp[i]=='9' || inp[i]=='9'){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
