#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *frwrdclk;
int *bcwrdclk;
int clock_a[12];
int clock_b[12];
int pos_a=0;
int pos_b=0;

void reset_ev(){
    memset(clock_a,0,12*4);
    memset(clock_b,0,12*4);
    memset(frwrdclk,0,12*4);
    memset(bcwrdclk,0,12*4);
    pos_a=0;
    pos_b=0;
}

int *clockfrt(int a, int b){
    int temp=a;
    if(a>b){
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        clock_a[pos_a++]=i;
    }
    return clock_a;
}

int *clockbwrd(int a, int b){
    memset(clock_b,0,12*4);
    int temp=a;
    if(a>b){
        a=b;
        b=temp;
    }
    for(int i=a-1;i>0;i--){
        clock_b[pos_b++]=i;
    }
    for(int i=12;i>b;i--){
        clock_b[pos_b++]=i;
    }
    return clock_b;
}

int ckhintersec(int a,int b,int c,int d){
    frwrdclk=clockfrt(a,b);
    bcwrdclk=clockbwrd(a,b);
    /*
    for(int i=0;i<pos_a;i++){
        printf("%d\n",frwrdclk[i]);
    }
    printf("\n\n");
    for(int i=0;i<pos_b;i++){
        printf("%d\n",bcwrdclk[i]);
    }
    */
    int cfd,dfd=0;
    for(int i=0;i<pos_a;i++){
        if(frwrdclk[i]==c){
            cfd=1;
        }
        if(frwrdclk[i]==d){
            dfd=1;
        }
    }
    for(int i=0;i<pos_b;i++){
        if(bcwrdclk[i]==c){
            cfd=-1;
        }
        if(bcwrdclk[i]==d){
            dfd=-1;
        }
    }
    //printf("cfd= %d, dfd= %d \n",cfd,dfd);
    if(cfd==dfd){
        reset_ev();
        return 1;
    }
    reset_ev();
    return 0;
}

int main(){
    int a,b,c,d,tms=0;
    char buff[50000];
    char temp[5];
    scanf("%d",&tms);
    for(int i=0;i<tms;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        if(ckhintersec(a,b,c,d)){
            sprintf(temp, "NO\n");
            strcat(buff,temp);
        }
        else{
            sprintf(temp, "YES\n");
            strcat(buff,temp);
        }
    }
    printf("%s",buff);
}
