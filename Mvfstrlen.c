
#include <stdio.h>
#define MAX_LIMIT 500
int main()
{
   char arr_one[MAX_LIMIT];
   char arr_two[MAX_LIMIT];
   printf("Enter first string: ");
   fgets(arr_one, MAX_LIMIT, stdin);
   printf("First String taken as: %s", arr_one);
   printf("Enter Second string: ");
   fgets(arr_two, MAX_LIMIT, stdin);
   printf("Second String taken as: %s", arr_two);
   int i =0;
   int strlen_one = 0;
   int strlen_two = 0;
   while (arr_one[strlen_one]!= '\0')
   {
    strlen_one++;
   }
   while (arr_two[strlen_two]!= '\0')
   {
    strlen_two++;
   }
   if (strlen_one!=strlen_two)
   {
    printf("Strings are not same");
    return 0;
   }
   while (i!=strlen_one || i!=strlen_two)
   {
    if (arr_one[i]!=arr_two[i])
    {
     printf("Strings are Not Same");
     return 0;
    }
    i++;
   }
   printf("Strings are Same");
   return 0;
}