#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int help();
int ext();
int main()
{
 system("cls");
 printf("Welcome User\n");
 printf("What would you like to do?\n");
 printf("To know more about this programme enter (0)\n");
 int i;
 printf("Enter Option: ");
 scanf("%d",&i);
 if (i==0)
 {
  help();
 }
 if (i==1)
 {
  printf("Welcome To Addition\n");
  int a;
  printf("Enter First Value: ");
  scanf("%d", &a);
  int b;
  printf("Enter Second Value: ");
  scanf("%d", &b);
  int c = a+b;
  printf("Addition of %d and %d is %d\n", a, b, c);
  ext();
 }
 else if (i==2)
 {
  printf("Welcome To Subtraction\n");
  int a;
  printf("Enter First Value: ");
  scanf("%d", &a);
  int b;
  printf("Enter Second Value: ");
  scanf("%d", &b);
  int c = a-b;
  printf("Addition of %d and %d is %d\n", a, b, c);
  ext();
 }
 else if (i==3)
 {
  printf("Welcome to Multiplication\n");
  int a;
  int b;
  printf("Enter First Value: ");
  scanf("%d",&a);
  printf("Enter Second Value: ");
  scanf("%d",&b);
  int c = a * b;
  printf("Multiplication of %d and %d is %d\n", a, b ,c);
 }


}
int goback();
int help()
{
 system("cls");
 printf("Welcome to help\n");
 printf("What would you like help with?\n");
 printf("1)Available Commands\n");
 printf("2)Nvm, Take me back to main Program\n");
 printf("3)EXIT\n");
 int k;
 printf("Enter Option: ");
 scanf("%d",&k);
 if (k==1)
 {
  system("cls");
  printf("Available Options:\n");
  printf("1)Addition: Finds Summation of First and Second Number,To use enter (1)\n");
  printf("2)Substraction: Finds The Subtracted value of First number to the Second number, To use enter (2)\n");
  printf("3)Multiplication: Finds the product of two provided numbers, To use enter (3)\n");
  goback();
 }
 if (k==2)
 {
  main();
 }
 if (k==3)
 {
  printf("You have succesfully Exited");
  return 0;
 }
}
int goback()
{
 printf("Go Back[y/n]?");
 char f;
 //Tasin Haider what ever you do, DO NOT REMOVE the extra white space before the %c, The Function will break
 scanf(" %c", &f );

 if (f=='y')
 {
  help();
 }
 if (f=='n')
 {
  printf("You have Exited");
  return 0;
 }
 if (f!='y'&&'n')
 {
  printf("Wrong Input");
 }
}
int ext()
{
 printf("Continue to use the Programme?[y/n]?");
 char f;
 //Tasin Haider what ever you do, DO NOT REMOVE the extra white space before the %c, The Function will break
 scanf(" %c", &f );

 if (f=='y')
 {
  main();
 }
 if (f=='n')
 {
  printf("You have Exited");
  return 0;
 }
 if (f!='y'&&'n')
 {
  printf("Wrong Input");
 }
}
