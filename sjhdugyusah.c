#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
  int num1, num2;
  int gcd = 0;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  for(int i=1;i<num1||i<num2;i++){
    if(num1%i==0&&num2%i==0){
        gcd = i;
    }
  }
  printf("%d %d %d",num1,num2,gcd);
  return 0;
}
