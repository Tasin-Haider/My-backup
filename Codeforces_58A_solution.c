#include <stdio.h>
#include <string.h>

int main(){
    char text[1000];
    scanf("%s",text);
    int len = strlen(text);
    char hello[4] = {'h','e','l','o'};
    int position[1000];
    int j=0;
    for(int i=0;i<len;i++){
       for(int k=0;k<4;k++){
          if(text[i]==hello[k]){
            printf("Found %c at %dth index\n", hello[k], i);
          }
          
       }
       
    }
}