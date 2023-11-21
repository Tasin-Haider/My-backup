#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
bool isdec(double a)
{
  int x = ceil(a);
   if(a==x)
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
 printf("This tool can tell you if number is a float or integer\n");
 printf("Enter value: ");
 scanf("%lf",&a);
  if(isdec(a)==0)
  {
   printf("Value is a floating type");
  }
  else if (isdec(a)==1)
  {
    printf("Value is Integer");
  }


}
