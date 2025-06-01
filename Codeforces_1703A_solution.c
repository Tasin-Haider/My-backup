#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strlow(char word[]){
    for(int i=0;i<strlen(word);i++)
    {
       word[i] = tolower(word[i]); 
    }
}
int main(){
    char myArray[1000][21];
    int desiredint;
    scanf("%d",&desiredint);
    for(int i=0;i<desiredint;i++){
       scanf("%s", myArray[i]);
    }
    for(int i=0;i<desiredint;i++){
        strlow(myArray[i]);
    }
    for (int i=0;i<desiredint;i++){
        if(strcmp(myArray[i],"yes")==0)
        {
         printf("YES\n");
        }
        else{
         printf("NO\n");   
        }
    }
}