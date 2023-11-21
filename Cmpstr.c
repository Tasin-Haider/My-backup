#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
 char char_input[20];
 char comparing_char[20];
 printf("Enter First String: ");
 scanf("%s",&char_input);
 printf("Enter Second String: ");
 scanf("%s",&comparing_char);
 int letter;
 int sizeofchar_input=0;
 int sizeofchar_inputwithspace=0;
 int letter1;
 int sizeofcomp_char =0;
 int sizeofcomp_charwithspace =0;
 for(letter=0; char_input[letter]!='\0'; letter++)
 {
  sizeofchar_inputwithspace++;
 }
 for(letter=0; letter<sizeofchar_inputwithspace; letter++)
 {
  if(char_input[letter]==32)
       sizeofchar_input++; 
 }
 sizeofchar_input = sizeofchar_inputwithspace-sizeofchar_input;
 printf("%d\n", sizeofchar_input);
 for(letter1=0; comparing_char[letter1]!='\0'; letter1++)
 {
  sizeofcomp_charwithspace++;
 }
 for(letter1=0; letter1<sizeofcomp_charwithspace; letter1++)
 {
  if(comparing_char[letter1]==32)
       sizeofcomp_char++; 
 }
 sizeofcomp_char = sizeofcomp_charwithspace-sizeofcomp_char;
 printf("%d\n",sizeofcomp_char);
 if (sizeofchar_input != sizeofcomp_char)
 {
  printf("Strings are Not Identicle");
  return 0;
 }
 int sz;
 int identical;
 int not_identical;
 for (sz = 0; sz <= sizeofchar_input; sz++)
 {
  if (char_input[sz] == comparing_char[sz])
  {
    identical++;
  }
  if (char_input[sz] != comparing_char[sz])
  {
    not_identical++;
  }
 }
 printf("%d is identical\n",&identical);
 printf("%d is not identical\n",&not_identical);
 if (not_identical > identical)
 {
  printf("Strings are not Identical");
 }
 if (identical > not_identical)
 {
  printf("Strings are Identical");
 }

 

}
