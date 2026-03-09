#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *num_to_arr(int a,int size){
    int *arr = malloc((size)*sizeof(int));
    for(int i=0;i<size;i++){
        int digit=a%10;
        arr[i]=digit;
        a=a/10;
    }
    return arr;
}

int main(){
    int test_case;
    char print_buffer[10000]={0};
    scanf("%d",&test_case);
    int tickets[1100];
    for(int i=0;i<test_case;i++){
        int digit=0;
        scanf("%d",&digit);
        int *arr = num_to_arr(digit,6);
        for(int k=0;k<6;k++){
            int k1,k2;
            if(k==0){
                k1=0;
                k2=0;
            }
            if(k<3){
                k1=k1+arr[k];
            }
            else if(k>=3){
                k2=k2+arr[k];
            }
            if(k1==k2&&k==5){
                strcat(print_buffer,"Yes\n");
            }
            else if(k1!=k2&&k==5){
                strcat(print_buffer,"No\n");
            }
        }
        free(arr);
    }
    printf("%s",print_buffer);
}
