#include <stdio.h>
int main()
{
char y, n;
 printf( "Choose Wisely\n");  
 printf( "Got your story ready?(y/n)");
  
 scanf( "%c" ,&y);
  
 if (y == 'y')
 {
   
 printf("Get it to me biatch");
 
 }
 
 else if ( y == 'n')
 
 {
 
 printf("Whaaaaaaat, You too lazy and dumb I shall look for a better person\n");
        
 }
 else {
     
 printf("Wrong Input");
 }
 
 while ( y != 'y')
 {
    printf("Try Again\n");

    scanf( "%c" ,&y);
    if (y == 'y')
 {
   
 printf("Get it to me biatch");
 
 }
 
 else if ( y == 'n')
 
 {
 
 printf("Whaaaaaaat, You too lazy and dumb I shall look for a better person\n");
        
 }
 else {
     
 printf("Wrong Input");
 }
 }
 
 return 0;
 
 } 