#include <stdio.h>
#include<stdlib.h>


int main()
{
    char i;
    printf("Hey You?\n");
    printf("Will you be my friend [y/n]\n");
    printf("Answer=");scanf("%c" ,&i);
    if(i == 'y')
      {
        printf("Thankq so much");
      }
    else if (i == 'n')
      {
        printf("I am saddened");
      }
    else {printf("Try again");}
}
