#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *buf = malloc(1<<18);  // 1MB buffer
    setvbuf(stdout, buf, _IOFBF, 1<<18);
    int test_cases=0;
    char *printf_buffer = malloc(150000*sizeof(char));
    printf_buffer[0]='\0';
    scanf("%d",&test_cases);

    for(int i=0;i<test_cases;i++){
        int rating=0;
        scanf("%d",&rating);
        if(rating<=1399){
            strcat(printf_buffer,"Division 4\n");
        }
        else if(1400<=rating&&rating<=1599){
            strcat(printf_buffer,"Division 3\n");
        }
        else if(1600<=rating&&rating<=1899){
            strcat(printf_buffer,"Division 2\n");
        }
        else{
            strcat(printf_buffer,"Division 1\n");
        }
    }
    printf("%s",printf_buffer);
    return 0;
}
