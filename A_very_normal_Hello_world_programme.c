#include <stdio.h>
#include <string.h>
void help()
{
printf("Script:\n");
printf("1)say.what\n");
printf("2)the.what\n");
printf("3)you.know.what.go.for.it");
}
int main() {
    char i[30];
    printf("Want me to say it?\n");
    scanf("%s",&i);
   // printf("%s",i);
   if (strcmp(i,"help")==0)
   {
    help();
   }
   
    if (strcmp(i,"say.what")==0)
     {
      printf("The thing\n");
      char i[30];
      scanf("%s",&i);
    //printf("%s",i);
      if(strcmp(i,"the.what")==0)
      {
       printf("You know what I mean\n");
       char i [30];
       scanf("%s",&i);
        if(strcmp(i,"you.know.what.go.for.it")==0)
         {
          printf("You asked for it\n");
          int j;
          for(j=1; j<15; j++)
          {
           printf(".\n");
          }
          printf("H E L L O  W O R L D\n");
         }
      }
     }
    return 0;
}