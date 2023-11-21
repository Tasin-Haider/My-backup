#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int number;
    printf("Enter digit: ");
    scanf("%d",&number);
    int last_digit = number % 10;
    number = number /10;
    int fourth_digit = number %10;
    number = number / 10;
    int third_digit = number %10;
    number = number / 10;
    int second_digit = number %10;
    number = number / 10;
    int first_digit = number %10;
    number = number / 10;
    int summation = first_digit+second_digit+third_digit+fourth_digit+last_digit;
    printf("%d",summation);
    return 0;
}