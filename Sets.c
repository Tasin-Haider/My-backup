#include <stdio.h>
#include <conio.h>
#include <fcntl.h>
#include <io.h>
#include <locale.h>
#include <wchar.h>

#ifndef _O_U16TEXT
#define  _O_U16TEXT 0x00020000
#endif
int main()
 {

  int i;
  printf("How many Numbers in set?\n");
  printf("N: ");
  scanf("%d",&i);
 if(i==2)
 {
  int n1;
  int n2;
  printf("a: ");
  scanf("%d",&n1);
  printf("b: ");
  scanf("%d",&n2);
  printf("{%d}",n1);
  printf("{%d}",n2);
  printf("{%d,%d}",n1,n2);
  _setmode(_fileno(stdout), _O_U16TEXT);
  wprintf(L"\x0x2205");
 }
 if(i==3)
 {
  int a;
  int b;
  int c;
  printf("a: ");
  scanf("%d",&a);
  printf("b: ");
  scanf("%d",&b);
  printf("c: ");
  scanf("%d",&c);
  // wprintf(L"%c\n", fi);
  printf("{%d}",a);
  printf("{%d}",b);
  printf("{%d}",c);
  printf("{%d,%d}",a,b);
  printf("{%d,%d}",a,c);
  printf("{%d,%d}",b,c);
  printf("{%d,%d,%d}",a,b,c);
 }
 if(i==4)
 {
  int n1;
  int n2;
  int n3;
  int n4;
  printf("a: ");
  scanf("%d",&n1);
  printf("b: ");
  scanf("%d",&n2);
  printf("c: ");
  scanf("%d",&n3);
  printf("d: ");
  scanf("%d",&n4);
  printf("\n");
  printf("FULL SET IS = {%d, %d, %d, %d}, \n\n",n1,n2,n3,n4);
  // wprintf(L"%c\n", fi);
  printf("{%d}, ",n1);
  printf("{%d}, ",n2);
  printf("{%d}, ",n3);
  printf("{%d}, ",n4);
  printf("{%d, %d}, \n",n1,n2);
  printf("{%d, %d}, ",n1,n3);
  printf("{%d, %d}, ",n1,n4);
  printf("{%d, %d}, ",n2,n3);
  printf("{%d, %d}, ",n2,n4);
  printf("{%d, %d}, ",n3,n4);
  printf("{%d, %d, %d}, ",n1,n2,n3);
  printf("{%d, %d, %d}, ",n1,n2,n4);
  printf("{%d, %d, %d}, ",n2,n3,n4);
  printf("{%d, %d, %d}, ",n1,n3,n4);
  printf("{%d, %d, %d, %d}, ",n1,n2,n3,n4);
 }


 }
