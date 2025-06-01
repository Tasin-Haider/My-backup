#include <stdio.h>
#include <string.h>

int main(){
    int X=0;
    int test_case=0;
    char operation[4];
    scanf("%d",&test_case);
    for(int i=0;i<test_case;i++){
        scanf("%s",operation);
        if(strcmp(operation,"X++")==0||strcmp(operation,"++X")==0){
            X++;  
        }
        else if(strcmp(operation,"X--")==0||strcmp(operation,"--X")==0){
            X--;
        }
    }
    printf("%d",X);
}