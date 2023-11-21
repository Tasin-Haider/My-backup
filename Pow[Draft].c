#include <stdio.h>
#include <math.h>
int main() {

int n1;
int n2;
printf("Enter First Number= "); scanf("%d", &n1);
printf("Enter Second Number= "); scanf("%d", &n2);
int power = pow(n1, n2);
printf("%d to the power of %d is %d", n1 , n2, power);

  return 0;
}
