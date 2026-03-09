#include<stdio.h>
#include<stdlib.h>

int main(){
    int test_case=0;
    scanf("%d",&test_case);
    int soldiers[1100];
    test_case--;
    for(int i=0;i<=test_case;i++){
        scanf("%d",&soldiers[i]);
    }
    int soldier_position[2];
    int difference=abs(soldiers[0]-soldiers[test_case]);
    soldier_position[0]=0;
    soldier_position[1]=test_case;
    for(int i=1;i<=test_case;i++){
        int digit=abs(soldiers[i]-soldiers[i-1]);
        if(digit<difference){
            difference=digit;
            soldier_position[0]=i-1;
            soldier_position[1]=i;
        }
    }
    printf("%d %d",soldier_position[0]+1,soldier_position[1]+1);
}
