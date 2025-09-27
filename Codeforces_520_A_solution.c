#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
    int len;
    scanf("%d", &len);
    char *a;
    a = (char*)malloc((len + 1) * sizeof(char));
    scanf("%s", a);
    char carr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char prall[26];
    bool ispanagram = true;
    char *ret;
    for(int i=0;i<len;i++)
    {
     a[i] = tolower(a[i]);
    }
    for(int i=0;i<26;i++) 
    {
     ret = memchr(a, carr[i], len);
     if (ret != NULL)
     {
      prall[i] = *ret;
     } 
     else
     {
      prall[i] = '_';
      ispanagram = false;
      break;
     }
    }
    if(ispanagram)
    {
     printf("YES\n");
    } 
    else
    { 
     printf("NO\n");
    }
    free(a);
    return 0;
}