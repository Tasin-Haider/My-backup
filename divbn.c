#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>

bool isdec(double a)
{
int b = ceil(a);
 if(a==b)
 {
  return 1;
 }
 else if(a!=b)
 {
  return 0;
 }
}
bool divbn(double a, double b)
{
 double c = a / b;
 if(isdec(c)==1)
 {
  return 1;
 }
 else if(b!=0)
 {
  return 0;
 }
}

 int main()
  {
   double a;
   printf("a: ");
   scanf("%lf",&a);
   double b;
   printf("b: ");
   scanf("%lf",&b);
   if(divbn(a,b)==1)
     {
      printf("Yes");
     }
   else if(divbn(a,b)==0)
     {
      printf("No");
     }
  }