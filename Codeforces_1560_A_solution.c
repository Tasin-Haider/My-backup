#include <stdio.h>
#include <stdlib.h>


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
    scanf("%d",&test_case);
    int cases[110];
    int sequence[10000];
    int max=1;
    for(int i=0;i<test_case;i++){
        int digit;
        scanf("%d",&digit);
        cases[i]=digit;
        if(digit>max){
            max=digit;
        }
    }
    int count=0;
    for(int i=0;count<=max;i++){
        int tmp=i;
        int valid=0;
        int size=0;
        while(tmp>0){
            size++;
            tmp=tmp/10;
        }
        int *num_sequence = num_to_arr(i,size);
        if(num_sequence[0]==3){
            valid=1;
        }
        if(i%3!=0&&valid==0){
            sequence[count++]=i;
        }
        free(num_sequence);
    }
    for(int i=0;i<test_case;i++){
        printf("%d\n",sequence[cases[i]-1]);
    }
}
