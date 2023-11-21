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
 system("cls");  // For Linux use system("clear");
 printf("This is the list of all available commands and tips\n");
 printf("[Addition] Adds the number with another, To add type [add]\n");
 printf("[Subtract] Subtracts number with another, To substract type [sub]\n");
 printf("[Multiply] Multiplies number with another number, To multiply type [multiply]\n");
 printf("[Divide] Divides a number with another, To divide type [div] \n");
 printf("[Square] Finds the Square of that number, To find square type [square]\n");
 printf("[Square root]Finds the square root, To find square root enter [sqroot]\n");
 printf("[Sine] Finds the Sine value of number, To find Sine enter [sin]\n");
 printf("[Tangent] Finds the tangent value of number, To find tangent enter [tan]\n");
 printf("[Cos] Finds the cos of that value, To find Cos enter [cos]\n");
 printf("[Quadratic Equation] Find the value of quad equation, To find QuadEq enter [quadeq]\n");
 printf("NB DO NOT TYPE IN FLOAT TYPE ,Float type means point numbers or numbers experssed as eg: 2.9876 or etc\n");
 main();
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
 int n1;
 int n2;
 printf("Enter First Number= "); scanf("%d", &n1);
 printf("Enter Second Number= "); scanf("%d", &n2);
 int power = pow(n1, n2);
 printf("%d to the power of %d is %d", n1 , n2, power);
}
void root()
{
double number;
double rt;
printf("Enter an integer: ");
scanf("%lf", &number);
rt = sqrt(number);
printf("Square root of %lf is %.4lf", number, rt);
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
  return 0;
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
  else if (strcmp(input, "sqroot") == 0)
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
