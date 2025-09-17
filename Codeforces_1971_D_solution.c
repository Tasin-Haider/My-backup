#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int foundi[10000];
int pos_fi=0;
int rep_c=0;
int long_rep=0;
char arrtmp[10000];
int slices=0;
int iscount=0;
int oscount=0;
int isarr[10000];
int osarr[10000];
int is=0;
int os=0;
int setl=0;

void reset_len_arr(){
    for(int i=0;i<iscount;i++){
        isarr[i]=0;
    }
    for(int i=0;i<oscount;i++){
        osarr[i]=0;
    }
}

void rs_et(){
    memset(foundi,0,pos_fi*sizeof(int));
    pos_fi=0;
    rep_c=0;
    long_rep=0;
}

char *arr_fill(char c,int len){
    for(int i=0;i<len;i++){
        arrtmp[i]=c;
    }
    arrtmp[len] = '\0';
    return arrtmp;
}

char *spsstrcpyv2(const char in_arr[], char out_arr[], int c, int d) {
    int j = 0;
    for (int i=c;i<=d&&in_arr[i]!='\0';i++) {
        out_arr[j++] = in_arr[i];
        //printf("\n %d %d", j - 1, i);
    }
    out_arr[j] = '\0';
    return out_arr;
}

int *searchsubstr(char *arr, char *subarr){
    int len=strlen(arr);
    int h1=0;
    int incr=strlen(subarr)-1;
    int h2=incr;
    int *result = malloc(2 * sizeof(int));
    result[0] = result[1] = -1;
    char *buff = malloc((strlen(subarr)+1) * sizeof(char));
    for(int i=0;h2<len;i++){
        spsstrcpyv2(arr,buff,h1,h2);
        if(strcasecmp(buff,subarr)==0){
            result[0]=h1;
            result[1]=h2;
            free(buff);
            return result;
        }
         h1++;
         h2++;
    }
    free(buff);
    return result;
}

char *delftind(char *in_arr, char *out_arr, int stind, int edind) {
    int len = strlen(in_arr);
    char *arrcp = malloc((len + 1) * sizeof(char));
    strcpy(arrcp, in_arr);
    int i;
    for (i = stind - 1; edind < len; i++, edind++) {
        in_arr[i] = arrcp[edind];
    }
    in_arr[i] = '\0';
    strcpy(out_arr,in_arr);
    free(arrcp);
    return out_arr;
}

void search_reps(char *arr, char c){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==c){
            rep_c++;
            if(arr[i+1]!=c){
                foundi[pos_fi++]=rep_c;
                rep_c=0;
            }
        }
    }

}

int search_reps_i(char *arr){
    search_reps(arr,'1');
    //printf("Number of indivisual repetations for 1: %d\n",pos_fi);
    isarr[pos_fi+1];
    iscount=pos_fi;
    memcpy(isarr, foundi, (pos_fi+1)*4);
    for(int i=0;i<pos_fi;i++){
        printf("%d\n",isarr[i]);
        if(isarr[i]>long_rep){
            long_rep=isarr[i];
        }
        if(isarr[i]!=1){
            slices++;
        }
    }
    is=long_rep;
    //printf("Longest rep of 1: %d\n",long_rep);
    if(slices>1){
    return -1;
    }
    if(slices<=1){
    return 1;
    }
}

int search_reps_o(char *arr){
    search_reps(arr,'0');
    //printf("Number of indivisual repetations for 0: %d\n",pos_fi);
    osarr[pos_fi+1];
    oscount=pos_fi;
    memcpy(osarr, foundi, (pos_fi+1)*4);
    for(int i=0;i<pos_fi;i++){
        printf("%d\n",osarr[i]);
        if(osarr[i]>long_rep){
            long_rep=osarr[i];
        }
        if(osarr[i]!=1){
            slices++;
        }
    }
    os=long_rep;
    //printf("Longest rep of 0: %d\n",long_rep);
    //printf("By now slices needed: %d\n",slices);
    if(slices>1){
    rs_et();
    return 0;
    }
    if(slices<=1){
    rs_et();
    return 1;
    }
}

int main(){
    char *arr = malloc(100000*sizeof(char));
    char *temp = malloc(100000*sizeof(char));
    char *anttmp = malloc(100000*sizeof(char));
    int posi[2];
    scanf("%s",arr);
    strcpy(temp,arr);
    search_reps_i(temp);
    if(iscount==0){
        printf("Final cuts:1");
        return 0;
    }
    int sttmp[2];
    int off_set=0;
    char bft[100000];
    wrkl:
    for(int i=0;i<iscount;i++){
        if(isarr[i]>1){
            char *pattern = arr_fill('1',isarr[i]);
            memcpy(sttmp,searchsubstr(spsstrcpyv2(temp,bft,off_set,strlen(temp)),pattern),2*sizeof(int));
            off_set=0;
            if(sttmp[0]!=-1&&sttmp[1]!=-1){
                printf("Delete from %d to %d for iteration %d of total %d runs\n",sttmp[0],sttmp[1],i,iscount);
                off_set+=sttmp[0]+sttmp[1];
            }
            delftind(temp,temp,sttmp[0],sttmp[1]);
            setl++;
            printf("At this stage: %s\n",temp);
        }
    }
    off_set=0;
    rs_et();
    search_reps_o(temp);
    for(int i=0;i<oscount;i++){
        if(osarr[i]>1){
            char *pattern = arr_fill('0',osarr[i]);
            memcpy(sttmp,searchsubstr(spsstrcpyv2(temp,bft,off_set,strlen(temp)+1),pattern),2*4);
            off_set=0;
            if(sttmp[0]!=-1&&sttmp[1]!=-1){
                printf("Delete from %d to %d for iteration %d of total %d runs\n",sttmp[0],sttmp[1],i,oscount);
                off_set+=sttmp[0]+sttmp[1];
            }
            delftind(temp,temp,sttmp[0],sttmp[1]);
            setl++;
            printf("At this stage: %s\n",temp);
        }
    }
    off_set=0;
    reset_len_arr();
    rs_et();
    if(search_reps_i(temp)==1&&iscount>1&&oscount>1){
        goto wrkl;
        ;
    }
    if(strlen(temp)==3){
        setl=setl+2;
    }
    if(strlen(temp)==2){
        setl++;
    }
    printf("Final cuts:%d",setl);
}
