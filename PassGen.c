#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int renchar;


int Simple_gen()
{
 printf("This is the simple Password Generator\n");
 int choosegen;
 printf("You get to choose your Pass-Gen Version\n");
 printf("1)Simple_Generation Module Version: 1.01\n");
 printf("2)Simple_Generation Module Version: 8.4.1\n");
 printf("Select Your Pass-Gen Version: ");
 scanf("%d",&choosegen);
 if(choosegen == 1)
 {
  printf("This Password Generator is Running on the Simplest Version of 1.01\n");
  printf("You Selected Password length of %d\n",renchar);
  printf("The Password Generated for you is:- ");
  int smpgenv1[renchar];
  for(int i=0; i<renchar; i++)
  {
   smpgenv1[i] = i;
  }
  for(int i=0; i<renchar; i++)
  {
   printf("%d",smpgenv1[i]);
  }
  printf("\n....Password Generation Complete");
 }
 if(choosegen == 2)
 {
  printf("This Password Generator is Running on the the Improved Version of 8.4.1\n");
  printf("You Selected Password length of %d\n",renchar);
  srand(time(NULL));
  int smpgenv8[renchar];
  for(int i=0; i<renchar; i++)
  {
   smpgenv8[i] = rand() % 10;
  }
  for(int i=0; i<renchar; i++)
  {
   printf("%d",smpgenv8[i]);
  }

 }
}

int Complex_gen()
{
 printf("This is the Complex Password Generator\n");
 int choosegen;
 printf("You get to choose your Pass-Gen Version\n");
 printf("1)Complex_Generation Module Version: EARLY_vr: 3.07\n");
 printf("2)Complex_Generation Module Version: IGR_vr: 6.3.56\n");
 printf("3)Complex_Generation Module Version: HSR_vr: 9.2.66\n");
 printf("Select Your Pass-Gen Version: ");
 scanf("%d",&choosegen);
 if(choosegen == 1)
  {
   printf("This Password Generator is Running on the Complex_gen's EARLY Build of 3.07\n");
   printf("You Selected Password length of %d\n",renchar);
   printf("The Password Generated for you is:- ");
   char Valid_Key[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   char cmplx_gen[renchar];
   srand(time(NULL));
   for(int i=0; i<renchar; i++)
   {
    cmplx_gen[i] = Valid_Key[rand() % 52];
   }
   for(int i=0; i<renchar; i++)
   {
    printf("%c",cmplx_gen[i]);
   }
  }
  else if(choosegen==2)
  {
   printf("This Password Generator is Running on the Complex_gen's Integrity Version of 6.3.56\n");
   printf("You Selected Password length of %d\n",renchar);
   printf("The Password Generated for you is:- ");
   char Valid_Key[61] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9'};
   char cmplx_gen[renchar];
   srand(time(NULL));
   for(int i=0; i<renchar; i++)
   {
    cmplx_gen[i] = Valid_Key[rand() % 61];
   }
   for(int i=0; i<renchar; i++)
   {
    printf("%c",cmplx_gen[i]);
   }
  }
  else if(choosegen==3)
  {
   printf("This Password Generator is Running on the Complex_gen's Higher Security RED Version of 9.2.66\n");
   printf("You Selected Password length of %d\n",renchar);
   printf("The Password Generated for you is:- ");
   char Valid_Key[72] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','!','@','#','$','%','&','*','~',';','?',':'};
   char cmplx_gen[renchar];
   srand(time(NULL));
   for(int i=0; i<renchar; i++)
   {
    cmplx_gen[i] = Valid_Key[rand() % 72];
   }
   for(int i=0; i<renchar; i++)
   {
    printf("%c",cmplx_gen[i]);
   }
  }
}

int main()
{
 printf("Welcome To Password Generator\n");
 printf("To Generate A Password Enter The Desired Char length:\n");
 printf("Char Length: ");

 scanf("%d",&renchar);
 printf("What kind of Password would you like to generate?\n");
 printf("1)Simple Password\n");
 printf("2)Complex Password\n");
 int choice;
 printf("Enter Choice: ");
 scanf("%d",&choice);
 if(choice == 1)
 {
  Simple_gen();
 }
 if(choice == 2)
 {
  Complex_gen();
 }
 printf("\nProcess Complete.....Press any Key to Quit");
 getch();
}
