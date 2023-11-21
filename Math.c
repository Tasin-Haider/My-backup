 #include <stdio.h>
 #include <conio.h>
 #include <math.h>
 #define PI 3.141592654
 void greet()
 {
 printf("This is a calculator written in C fully, Though not perfect it does most of it\n");
 printf("The calculators have a lot of functions so Kindly check out help for all the available info\n");
 }
 void help()
 {
 printf("This is the list of all available commands and tips\n");
 printf("[Addition] Adds the number with another, To add type [a]\n");
 printf("[Substract] Subtracts number with another, To substtract type [s]\n");
 printf("[Multiply] Multiplies number with another number, To multiply type [m]\n");
 printf("[Divide] Devidies a number with another, To divide type [d] \n");
 printf("[Square] Finds the Square of that number, To find square type [q]\n");
 printf("[Square root]Finds the square root, To find quare root enter [r]\n");
 printf("[Sine] Finds the Sine value of number, To find Sine enter [y]\n");
 printf("[Tangent] Finds the tangent value of number, To find tangent enter [t]\n");
 printf("[Cos] Finds the cos of that value, To find Cos enter [c]\n");
 printf("[Quadratic Equaation] Find the value of quad equation, To find QuadEq enter [u]\n");
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
 void square()
{
 int number;
 printf("Enter number=");scanf ("%d" ,&number);
 int square = number * number;
 printf("Suare of %d is %d", number, square);
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
 printf("root1 = %.4lf and root2 = %.4lf", root1, root2);
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
 char i;
 greet();
 printf("What would you like to do?==");
 scanf ("%c" , &i );
 if ( i == 'h' )
 {
  help();
 }
 else if ( i== 'a')
 {
 printf("You are now in Addition mode\n");
 add();
 }
 else if ( i== 's')
 {
 printf("You are now in Substraction mode\n");
 substract();
 }
 else if ( i=='m')
 {
 printf("You are now in Multiply mode\n");
 multiply();
 }
 else if ( i=='d' )
 {
 printf("You are now in Divison Mode\n");
 divide();
 }
 else if ( i=='q')
 {
 printf("You are now in Square mode\n");
 square();
 }
else if ( i=='r')
{
printf("You are now in Square Root mode\n");
root();
}
else if ( i=='y')
{
printf("You are now in sine mode\n");
sine();
}
else if ( i=='t')
{
printf("You are now in tangent mode");
tangent();
}
else if ( i=='c')
{
printf("You are now in Cos mode");
coss();
}
else if ( i=='u')
{
printf("You are now in Quadratic Equation mode \n");
printf("This is a function under devolopment so needs testing \n");
printf("And currently only works for real numbers that are above 0 and greater than I \n");
Quadraticequation();
}
else
{
printf("Seems like a wrong input, Maybe check help and try again");
}
return 0;
}
