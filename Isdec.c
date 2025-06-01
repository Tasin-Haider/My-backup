#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isdec(double a)
{
int b = ceil(a);
 if(a==b)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

int main()
{
 double a;
 printf("Enter Number: ");
 scanf("%lf",&a);
  if(isdec(a)==1)
  {
   printf("Number is Integer");
  }
  else if(isdec(a)==0)
  {
   printf("Number is floating type");
  }

 return 0;
}