#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

{
    printf("Enter a number: ");
    char numar[100];
    scanf("%s",&numar);
    int arsize = strlen(numar);
    printf("Array Size :%d\n",arsize);
    int numarn[arsize];
    for (int i = 0; i <= arsize; i++)
    {
     numarn[i] = numar[i] - '0';
    }
    int sum= numarn[0]+numarn[1];
    int k=1;
    for (int j=2; j!=arsize; j++)
    {
     sum=sum+numarn[j];
    }
     printf("Summation of numbers in number= %d",sum);
    return 0;
}