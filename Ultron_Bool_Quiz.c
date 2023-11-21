#include <stdio.h>
#include <string.h>
#include <stdbool.h>
  void func()
   {
     char k[20];
     printf("Welcome to BooleanQuiz\n");
     printf("Take the test now?[y/n]");
     scanf("%s", &k);
        if(strcmp(k, "y")==0)
        {
          printf("You can test your boolean knowledge by making your own quizes and answering them\n");
          int n1;
          int n2;
          printf("Enter first number= ");
          scanf("%d", &n1);
          printf("Enter the Operator, Your options are \n 1)grtr(n1>n2)\n 2)lsr (n1<n2)\n 3)equ (n1=n2)\n 4)ntequ (n1!=n2)\n 5)comb (combines operators ie:n1>=n2)\n");
          char sym[30];
          printf("Operator= "); scanf("%s",sym);

             if(strcmp(sym, "grtr")==0)
                 {
                   printf("Yor Operator is n1>n2\n");
                   printf("Enter second number= ");
                   scanf("%d", &n2);
                   int j;

                    bool gtr =( n1 > n2 );
                    printf("Your boolean expression is \n (%d > %d) ", n1 , n2);
                    printf("Your answer= ");
                    scanf("%d", &j);
                       if(j==gtr)
                         {
                          printf("Congratulations 🎉🎉, You answered correctly.");
                         }
                       else if(j != gtr && j>1)
                         {
                          printf("Woah! Didn't quite catch that one");
                         }
                       else if(j != gtr )
                         {
                          printf("Sadly, You answered wrong! Better Luck next time");
                         }
                    printf("Correct Answer was %d", gtr);



                 }
             else if(strcmp(sym, "lsr")==0)
                {
                 printf("Your Operator is n1<n2\n");
                 printf("Enter second number= ");
                 scanf("%d", &n2);
                 int j;

                 bool lsr =( n1 < n2 );
                 printf("Your boolean expression is \n (%d < %d) ", n1 , n2);
                 printf("Your answer= ");
                 scanf("%d", &j);
                     if(j==lsr)
                       {
                        printf("Congratulations 🎉🎉, You answered correctly.");
                       }
                     else if(j != lsr && j>1)
                       {
                        printf("Woah! Didn't quite catch that one");
                       }
                     else if(j != lsr )
                       {
                        printf("Sadly, You answered wrong! Better Luck next time");
                       }
                     printf("Correct Answer was %d", lsr);

                }
            else if(strcmp(sym, "equ")==0)
               {
                printf("Your Operator is n1=n2\n");
                 printf("Enter second number= ");
                 scanf("%d", &n2);
                 int j;

                 bool equ =( n1 = n2 );
                 printf("Your boolean expression is \n (%d = %d) ", n1 , n2);
                 printf("Your answer= ");
                 scanf("%d", &j);
                     if(j==equ)
                       {
                        printf("Congratulations 🎉🎉, You answered correctly.");
                       }
                     else if(j != equ && j>1)
                       {
                        printf("Woah! Didn't quite catch that one");
                       }
                     else if(j != equ )
                       {
                        printf("Sadly, You answered wrong! Better Luck next time");
                       }
                     printf("Correct Answer was %d", equ);
               }
            else if(strcmp(sym, "ntequ")==0)
               {
                printf("Your Operator is n1!=n2\n");
                 printf("Enter second number= ");
                 scanf("%d", &n2);
                 int j;

                 bool ntequ =( n1 != n2 );
                 printf("Your boolean expression is \n (%d != %d) ", n1 , n2);
                 printf("Your answer= ");
                 scanf("%d", &j);
                     if(j==ntequ)
                       {
                        printf("Congratulations 🎉🎉, You answered correctly.");
                       }
                     else if(j != ntequ && j>1)
                       {
                        printf("Woah! Didn't quite catch that one");
                       }
                     else if(j != ntequ )
                       {
                        printf("Sadly, You answered wrong! Better Luck next time");
                       }
                     printf("Correct Answer was %d", ntequ);
               }
            else if(strcmp(sym, "comb")==0)
               {
                char opr[30];
                printf("Comb assists in making complex operators like '<=' , '>='\n");
                printf("Select first operator\n");
                printf("Your options are:\n 1)grtr(>) \n 2)lsr (<)\n");
                printf("Operator: "); scanf("%s", &opr);

                  if(strcmp(opr, "lsr")==0)
                    {
                     char vrf[30];
                     printf("Enter next operator");
                     printf("Your options are: \n 1)equ (=)\n");
                     printf("Operator: "); scanf("%s", &vrf);
                       if(strcmp(vrf, "equ")==0)
                           {
                            printf("Your Operator is n1<=n2\n");
                            printf("Enter second number= ");
                            scanf("%d", &n2);
                            int j;

                            bool lsrequ =( n1 <= n2 );
                            printf("Your boolean expression is \n (%d <= %d) ", n1 , n2);
                            printf("Your answer= ");
                            scanf("%d", &j);
                               if(j==lsrequ)
                                 {
                                  printf("Congratulations 🎉🎉, You answered correctly.");
                                 }
                               else if(j != lsrequ && j>1)
                                 {
                                  printf("Woah! Didn't quite catch that one");
                                 }
                               else if(j != lsrequ )
                                 {
                                  printf("Sadly, You answered wrong! Better Luck next time");
                                 }
                          }
                    }

                  else if(strcmp(opr, "grtr")==0)
                     {
                      char chk[30];
                      printf("Enter next operator\n");
                      printf("Your options are: \n 1)equ (=)\n");
                      printf("Operator: "); scanf("%s", &chk);

                         if(strcmp(chk, "equ")==0)
                           {
                            printf("Your Operator is n1>=n2\n");
                            printf("Enter second number= ");
                            scanf("%d", &n2);
                            int j;

                            bool gtrequ =( n1 >= n2 );
                            printf("Your boolean expression is \n (%d >= %d) ", n1 , n2);
                            printf("Your answer= ");
                            scanf("%d", &j);
                               if(j==gtrequ)
                                 {
                                  printf("Congratulations 🎉🎉, You answered correctly.");
                                 }
                               else if(j != gtrequ && j>1)
                                 {
                                  printf("Woah! Didn't quite catch that one");
                                 }
                               else if(j != gtrequ )
                                 {
                                  printf("Sadly, You answered wrong! Better Luck next time");
                                 }

                               printf("Correct Answer was %d", gtrequ);

                            }

                      }

               }

         }
        else if (strcmp(k, "n")==0)
         {
          printf("See you again sometime soon then");
         }
        else if (strcmp(k, "tenchan")==0)
        {
         printf("I love Sora amamiya, Isn't she cute?");
        }
        else
        {
         printf("Wrong Input?");
        }
    }



int main()
{
    func();
    return 0;
}
