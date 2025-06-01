#include <stdio.h>
#include <string.h>

int main()
 {
  printf("Enter Number: ");
  char arr[500];
  scanf("%s",&arr);
  int i=0;
  int sum;
  while(arr[i+1]!='\0')
  {
   sum += arr[i]-'0' + arr[i+1]-'0';
   i+=2;
  }
  if(strlen(arr)%2!=0)
    sum+= arr[i] - '0';
  printf("%d",sum);
 }