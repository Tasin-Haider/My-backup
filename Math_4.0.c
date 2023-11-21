#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void greet()
 {
  printf("This is a calculator written in C fully, Though not perfect it does most of it\n");
  printf("The calculators have a lot of functions so Kindly check out help for all the available info\n");
 }
 void help()
 {
  int i;
  system("cls");  // For Linux use system("clear");
  printf("Select the Command You want help with\n 1)Addition[add]\n 2)Subtraction[sub]\n 3)Multiply[Multi]\n 4)Divivde[div]\n");
  printf(" 5)Power[Pow]\n 6)Square Root[sqrt]\n 7)Quadratic Equation [Quadequ]\n 8)Sin [sin]\n 9)Tan [tan]\n 10)Cos [cos]\n 11) Easy Percentage [ezper]\n");
  printf("Required more assistance with no: "); scanf("%d",&i);
  if (i==1)
  {
   printf("Function: Addition, To use type [add] , Adds Inputed Values into a summation");
  }
  if (i==2)
  {
   printf("Function: Sunstraction, To use type [sub], Subtracts the First number from the other number");
  }
  if (i==3)
  {
   printf("Function: Multiply , To use type [multi], Multipies first number with the second");
  }
  if (i==4)
  {
   printf("Function: Divide, To use type [div], Divides the first number with the second");
  }
  if (i==5)
  {
   printf("Function: Power, To use type [pow], Multiplies first number with itself nth numbers of times of the power on the number");
  }
  if (i==6)
  {
   printf("Function: Square root, To use type [sqrt], Root is essentially the number when multiplied by itself it winds up to be the inputted number");
  }
  if (i==7)
  {
   printf("Function: Quadratic Equation, To use type [quadequ], A magical formula that can essentially solve a math that seems impossible to solve, Just try it out");
  }
  if (i==8)
  {
   printf("Function: Sin, To use type [sin], Finds the value of Sin(x)");
  }
  if (i==9)
  {
   printf("Function: Tan, To use type [tan], Finds the value of tan(x)");
  }
    if (i==10)
  {
   printf("Function: Cos, To use type [cos, Finds the value of Cos(x)");
  }
  if (i==11)
  {
   printf("Function: Easy Percentage, To use type [ezper], Makes working with percentage very easy and neat");
  }
 }
 void add()
 {
 int number1;
 int number2;
 printf("Type first number=");scanf ("%d" ,&number1);
 printf("Type second number=");scanf ("%d" ,&number2);
 int add = number1 + number2;
 printf("Sum of %d and %d is %d", number1, number2, add );
 }
 void substract()
 {
 int number1;
 int number2;
 printf("Type first number=");scanf ("%d" ,&number1);
 printf("Type second number=");scanf ("%d" ,&number2);
 int sub = number1 - number2;
 printf("Substraction of %d and %d is %d", number1, number2, sub );
 }
 void multiply ()
 {
 int number1;
 int number2;
 printf("Type first number=");scanf ("%d" ,&number1);
 printf("Type second number=");scanf ("%d" ,&number2);
 int multiply = number1 * number2;
 printf("Multiplication of %d and %d is %d", number1, number2, multiply );
 }
  void divide ()
 {
 int number1;
 int number2;
 printf("Type first number=");scanf ("%d" ,&number1);
 printf("Type second number=");scanf ("%d" ,&number2);
 int divide = number1 / number2;
 printf("Division of %d and %d is %d", number1, number2, divide );
 }
 void power()
{
 double n1;
 double n2;
 printf("Enter First Number= "); scanf("%lf", &n1);
 printf("Enter Second Number= "); scanf("%lf", &n2);
 double power = pow(n1, n2);
 printf("%lf to the power of %lf is %.4lf", n1 , n2, power);
}
void root()
{
double number;
double rt;
printf("Enter a number: ");
scanf("%lf", &number);
rt = sqrt(number);
printf("root of %lf is %.4lf", number, rt);
}
void Quadraticequation()
{
double a;
double b;
double c;
double discrim;
double root1;
double root2;
printf("Enter value of a="); scanf("%lf", &a);
printf("Enter value of b="); scanf("%lf", &b);
printf("Enter value of c="); scanf("%lf", &c);
printf(" FOR DEBUG PURPOSES CHECKING INPUTED VALUES OF ABC %.2lf %.2lf %.2lf \n", a, b , c);
discrim = b * b - 4 * a * c;
if(discrim > 0)
{
 root1 = (-b + sqrt(discrim)) / (2 * a);
 root2 = (-b - sqrt(discrim)) / (2 * a);
 printf("Root1 = %.4lf and Root2 = %.4lf", root1, root2);
}
 else
 {
  return;
 }
}
void sine()
{
double x;
double result;
printf("Enter a value=");
scanf("%lf", &x);
result = sin(x);
printf("sin(%.2lf) = %.9lf\n", x, result);
}
void tangent()
{
double x;
double result;
printf("Enter a value=");
scanf("%lf", &x);
result = tan(x);
printf("tan(%.2lf) = %.7lf\n", x, result);
}
void coss()
{
printf("Enter a value=");
double arg, result;
scanf("%lf", &arg);
result = cos(arg);
printf("cos of %.2lf = %.7lf", arg, result);
}
void ezper()
{
 system("cls");
 printf(" You are now in Ezper mode\n");
 int i;
 printf(" Enter function\n 1)X is y% of z\n 2)x percent of y is z\n");
 printf(" Enter= "); scanf("%d",&i);
   if(i==1)
    {
     printf("Your selected function is: ");
     double n1;
     double n2;
     double n3 = 100;
     printf("x y% of z\n");
     printf("Value of x= "); scanf("%lf",&n1);
     printf("Value of y= "); scanf("%lf",&n2);
     double result = (n1 / n2) * n3;
     printf(" %.1lf is %.2lf percentage of %.1lf",n1,result,n2);
    }
   else if (i==2)
   {
    printf("Your selected function is: ");
    double n1;
    double n2;
    double n3 = 100;
    printf("x percent of y is z\n");
    printf("Value of x= "); scanf("%lf",&n1);
    printf("Value of y= "); scanf("%lf",&n2);
    double result = (n1 * n2) / n3;
    printf("%.1lf percent of %.1lf is %.2lf",n1,n2,result);
   }
   else {printf("Wrong Input");}
 }
int main()
{
 greet();
 printf("What would you like to do?==");
 char input[20];
 scanf("%s" ,&input);

 if (strcmp(input, "add") == 0)
 {
  system("cls");  // For Linux use system("clear");
  printf ("Your Input was =%s \n" ,&input ); printf("You are now in Addition mode\n");
  add();
 }
 else if (strcmp(input, "help") == 0)
 {
  help();
 }
 else if (strcmp(input, "sub") == 0)
 {
  system("cls");  // For Linux use system("clear");
  printf ("Your Input was =%s \n" ,&input );
  printf("You are now in Substraction mode\n");
  substract();
 }
  else if (strcmp(input, "multi") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in Multiply mode\n");
   multiply();
  }
  else if (strcmp(input, "div") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in Divison Mode\n");
   divide();
  }
  else if (strcmp(input, "sqrt") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in Square Root mode\n");
   root();
  }
  else if (strcmp(input, "power") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in power mode\n");
   power();
  }
  else if (strcmp(input, "sin") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in sine mode\n");
   sine();
  }
  else if (strcmp(input, "tan") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in tangent mode");
   tangent();
  }
  else if (strcmp(input, "cos") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in Cos mode");
   coss();
  }
  else if (strcmp(input, "quadeq") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in Quadratic Equation mode \n");
   printf("This is a function under devolopment so needs testing \n");
   printf("And currently only works for real numbers that are above 0 and greater than I \n");
   Quadraticequation();
  }
  else if (strcmp(input, "ezper")==0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("You are now in Easy Percentage mode\n");
   ezper();
  }
  else if (strcmp(input, "tenchan") == 0)
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("Sora Amamiya is so cute damnit!");
  }
  else if (strcmp(input, "changelog")==0)
  {
   printf("This one just adds quality of life and once again no features\n");
   printf("Changes: \n 1)Makes the terminal easy to read/write by clearing terminal per function call\n 2)Finaly adds a credits to devs\n 3)Line of Code count this launch: 237");
  }
  else if (strcmp(input, "credits")==0)
  {
   printf("The Project is a work of the massive and succesful team of\n 1)Tasin Haider [Lead Programmer]\n 2)Tasin Haider [Supporting Debugger]\n 3)Tasin Haider [Distribution]\n 4)Tasin Haider [Devoloper]\n 5)Tasin Haider [Research and Devolopment Team]");
  }
  else
  {
   system("cls");  // For Linux use system("clear");
   printf ("Your Input was =%s \n" ,&input );
   printf("Wrong Input It Seems");
  }
  return 0;
}
