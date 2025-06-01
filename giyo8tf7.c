#include <stdio.h>
#include <string.h>

int main() {
  int X=0;
  int t;
  char operation[3];
  scanf("%d", &t);
  for(int i=0;i!=t;i++){
    scanf("%s",operation);
    if(strcmp(operation,"++X")||strcmp(operation,"X++")){
      X++;
    }
    else if(strcmp(operation,"--X")||strcmp(operation,"X--")){
      X--;
    }
    printf("%d",X);
  }
}
