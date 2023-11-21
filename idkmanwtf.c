#include <stdio.h>
int chkfrev;
int chkfrodd;

int main()
{
  int sizefrarr;
  scanf("%d",&sizefrarr);
  sizefrarr = sizefrarr-1;
  printf("Size of arr =%d \n",sizefrarr);
  int arrfrval[sizefrarr];
  for(int i=0;i<=sizefrarr;i++)
     {
      scanf("%d",&arrfrval[i]);
     }
  for(int k=0;k<=sizefrarr;k++)
     {
      if(arrfrval[k]%2==0)
        {
         chkfrev++;
        }
        else
        {
         chkfrodd++;
        }
     }
   if(chkfrev>chkfrodd && chkfrev!=chkfrodd)
    {
     printf("Array if even type\n");
    }
   else
    {
     printf("Array is odd type\n");
    }

    if(chkfrev>=chkfrodd)
    {
     for( int l=0;l<=sizefrarr;l++)
     {
      if(arrfrval[l]%2 !=0)
      {
       printf("The %d th index is odd",l);
       return 0;
      }
     }
    }

    else
    {
     for( int l=0;l<=sizefrarr;l++)
     {
      if(arrfrval[l]%2 ==0)
      {
       printf("The %d th index is even",l);
       return 0;
      }
     }
    }

}
