#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void spsstrcpyv2(const char a[], char b[], int c, int d) {
    int j = 0;
    for (int i = c; i <= d && a[i] != '\0'; i++) {
        b[j++] = a[i];
        //printf("\n %d %d", j - 1, i);
    }
    b[j] = '\0';
}
int main()
{
    int tst_case=0;
    int str_length;
    scanf("%d",&tst_case);
    char *arr=malloc(1000000*sizeof(char));
    arr[0]='\0';
    char *answers=malloc(10000000*sizeof(char));
    answers[0]='\0';
    for(int i=0;i<tst_case;i++){
        scanf("%d",&str_length);
        scanf("%s",arr);
        if(str_length<4){
            strcat(answers,"No\n");
            continue;
        }
        char block_seven[5];
        char block_eight[5];
        char block_one[3];
        char block_two[3];
        char block_three[2];
        char block_four[4];
        char block_five[4];
        char block_six[2];
        spsstrcpyv2(arr,block_seven,0,3);
        spsstrcpyv2(arr,block_eight,str_length-4,str_length-1);
        spsstrcpyv2(arr,block_six,str_length-1,str_length-1);
        spsstrcpyv2(arr,block_five,0,2);
        spsstrcpyv2(arr,block_three,0,0);
        spsstrcpyv2(arr,block_four,str_length-3,str_length-1);
        spsstrcpyv2(arr,block_one,0,1);
        spsstrcpyv2(arr,block_two,str_length-2,str_length-1);
        if(strcmp(block_one,"20")==0&&strcmp(block_two,"20")==0){
            strcat(answers,"Yes\n");
            continue;
        }
        else if(strcmp(block_three,"2")==0&&strcmp(block_four,"020")==0){
            strcat(answers,"Yes\n");
            continue;
        }
        else if(strcmp(block_five,"202")==0&&strcmp(block_six,"0")==0){
            strcat(answers,"Yes\n");
            continue;
        }
        else if(strcmp(block_seven,"2020")==0||strcmp(block_eight,"2020")==0){
            strcat(answers,"Yes\n");
        }
        else{
            strcat(answers,"No\n");
        }

    }
    printf("%s",answers);
    free(arr);
    free(answers);
    return 0;
}
