#include<stdio.h>
#include<stdlib.h>

int main(){
    int citizens=0,max_wealth_held=0,expenditure=0;
    int personal_treasury[110];
    scanf("%d",&citizens);
    for(int i=0;i<citizens;i++){
        int wealth;
        scanf("%d",&wealth);
        personal_treasury[i]=wealth;
        if(wealth>max_wealth_held){
            max_wealth_held=wealth;
        }
    }
    for(int i=0;i<citizens;i++){
        if(personal_treasury[i]<max_wealth_held){
            while(personal_treasury[i]!=max_wealth_held){
                personal_treasury[i]++;
                expenditure++;
            }
        }
    }
    printf("%d",expenditure);
    return 0;
}
