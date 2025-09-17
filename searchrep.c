#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int foundi[10000];
int pos_fi=0;
int rep_c=0;
int long_rep=0;

void rs_et(){
    memset(foundi,0,sizeof(foundi));
    pos_fi=0;
    rep_c=0;
    long_rep=0;
}

int search_reps(char *arr, char c){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==c){
            rep_c++;
            if(i==len-1 || arr[i+1]!=c){
                foundi[pos_fi++]=rep_c;
                rep_c=0;
            }
        }
    }

}

int main(){
    char *arr = malloc(100000*sizeof(char));
    char c;
    printf("Enter a string: ");
    scanf("%s",arr);
    printf("Enter char to be searched: ");
    scanf(" %c",&c);
    search_reps(arr,c);
    for(int i=0;i<pos_fi;i++){
        //printf("%d\n",foundi[i]);
        if(foundi[i]>long_rep){
            long_rep=foundi[i];
        }
    }
    printf("Longest rep of %c: %d",c,long_rep);
    rs_et();
}
