#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main(){
    int group_count=0;
    scanf("%d",&group_count);
    int taxis=0;
    int groups[group_count+1];
    int count=0,threes_count=0,twos_count=0,ones_count=0;
    for(int i=0;i<group_count;i++){
        int digit;
        scanf("%d",&digit);
        if(digit==4){
            taxis++;
        }
        else if(digit==3){
            groups[count++]=digit;
            threes_count++;
        }
        else if(digit==2){
            groups[count++]=digit;
            twos_count++;
        }
        else{
            groups[count++]=digit;
            ones_count++;
        }
    }
    qsort(groups,count,sizeof(int),compare);
    printf("\n");
    for(int i=0;i<count;i++){
        printf(" %d ",groups[i]);
    }
    printf("\n");
    for(int i=0;i<threes_count+twos_count;i++){
        for(int k=threes_count+twos_count;k<count;k++){
            if(groups[k]==1){
                groups[i]+=groups[k];
                groups[k]=0;
                ones_count--;
                if(groups[i]==3){
                    continue;
                }
                else if(groups[i]==4){
                    break;
                }
            }
        }
    }
    threes_count=0;
    twos_count=0;
    printf("\nOnes count: %d\n",ones_count);
    for(int i=0;i<count;i++){
        if(groups[i]==4){
            taxis++;
            groups[i]=0;
        }
        else if(groups[i]==3){
            threes_count++;
        }
        else if(groups[i]==2){
            twos_count++;
        }
    }
    taxis+=threes_count;
    threes_count=0;
    if(twos_count%2==1){
        taxis+=(twos_count-1)/2;
        taxis++;
        twos_count=0;
    }
    if(twos_count%2==0){
        taxis+=twos_count/2;
        twos_count=0;
    }
    if(ones_count%4!=0){
        int c1=floor(ones_count/4);
        printf("%d",c1);
        taxis+=c1;
        taxis++;
        ones_count=0;
    }
    if(ones_count%4==0){
        taxis+=(ones_count)/4;
        ones_count=0;
    }
    for(int i=0;i<count;i++){
        printf(" %d ",groups[i]);
    }
    printf("\n%d",taxis);
    return 0;
}

