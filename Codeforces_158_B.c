#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int group=0;
    scanf("%d",&group);
    int *threes_group = malloc(group+1*sizeof(int));
    int *twos_group = malloc(group+1*sizeof(int));
    int *ones_group = malloc(group+1*sizeof(int));
    int threes_count=0,twos_count=0,ones_count=0;
    int taxis=0;
    for(int i=0;i<group;i++){
        int digit=0;
        scanf("%d",&digit);
        if(digit==4){
            taxis++;
        }
        else if(digit==3){
            threes_group[threes_count++]=digit;
        }
        else if(digit==2){
            twos_group[twos_count++]=digit;
        }
        else{
            ones_group[ones_count++]=digit;
        }
    }
    for(int i=0;i<threes_count;i++){
        if(i<ones_count){
            threes_group[i]+=ones_group[i];
            ones_group[i]=0;
        }
    }
    int rem_three=0;
    for(int i=0;i<threes_count;i++){
        if(threes_group[i]==4){
            taxis++;
            threes_group[i]=0;
        }
        else if(threes_group[i]==3){
            rem_three++;
        }
    }
    taxis+=rem_three;
    //printf("Remaining threes: %d\n",rem_three);
    //printf("Taxis: %d\n",taxis);
    if(twos_count%2!=0){
        free(twos_group);
        int *twos_group = malloc(1*sizeof(int));
        twos_group[0]=2;
        //printf("Twos was not divisible by 2\n");
        taxis+=(twos_count-1)/2;
        twos_count=1;
    }
    else{
        free(twos_group);
        int *twos_group = malloc(1*sizeof(int));
        twos_group[0]=0;
        taxis+=twos_count/2;
        twos_count=1;
    }
    int rem_one=0;
    for(int i=0;i<ones_count;i++){
        if(ones_group[i]==1){
            rem_one++;
        }
    }
    if(rem_one>=2&&twos_group[0]==2){
        taxis++;
        rem_one+=-2;
        twos_group[0]=0;
    }
    if(rem_one==0&&twos_group[0]==2){
        taxis++;
        twos_group[0]=0;
    }
    //printf("Remaining ones:%d\n",rem_one);
    /*for(int i=0;i<threes_count;i++){
        printf(" %d ",threes_group[i]);
    }
    printf("\n");
    for(int i=0;i<twos_count;i++){
        printf(" %d ",twos_group[i]);
    }
    printf("\n");
    for(int i=0;i<ones_count;i++){
        printf(" %d ",ones_group[i]);
    }
    */
    free(threes_group);
    free(twos_group);
    free(ones_group);
    printf("%d",taxis);
    return 0;
}

