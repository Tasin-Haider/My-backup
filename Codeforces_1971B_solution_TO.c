#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void spsstrcpyv2(const char a[], char b[], int c, int d) {
    int j = 0;
    for (int i = c; i <= d && a[i] != '\0'; i++) {
        b[j++] = a[i];
        //printf("\n %d %d", j - 1, i);
    }
    b[j] = '\0';
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

void delftind(char *arr, int stind, int edind) {
    int len = strlen(arr);
    char *arrcp = malloc((len + 1) * sizeof(char));
    if (arrcp == NULL) {
        printf("Memory allocation failed for arrcp\n");
        return;
    }

    strcpy(arrcp, arr);
    int i;
    for (i = stind - 1; edind < len; i++, edind++) {
        arr[i] = arrcp[edind];
    }
    arr[i] = '\0';
    free(arrcp);
}

char *jargon(char *arr, char* fisarr)
{
    //printf("Taken as: %s\n",arr);
    int len = strlen(arr);
    int fisp=0;
    char buffer[20];
    int pos=0;
    char *indarr = malloc(len*5*sizeof(char));
    indarr[pos++] = ',';
    for(int i=0;i<len;i++){
        sprintf(buffer, "%d", i);
        for(int k=0;buffer[k]!='\0';k++){
            indarr[pos++]=buffer[k];
        }
        if(i<len){
         indarr[pos++]=',';
        }
        }
    indarr[pos]='\0';
    //printf("Indarr: %s\n",indarr);
    int lenindr = strlen(indarr);
    //printf("Jargon text: ");
    work:
    for(int i=0; i<lenindr; i++){
        int dynamic_max = (rand() ^ (lenindr * 17)) % len;
        int k = dynamic_max;
        char numb[1000];
        char tstr[1002]="";
        char frm[] = ",";
        sprintf(numb,"%d",k);
        strcat(tstr,frm);
        strcat(tstr,numb);
        strcat(tstr,frm);
        //printf("First up we can delete %s\n",tstr);
        int *indices = searchsubstr(indarr,tstr);
        if(indices[0]==-1 && indices[1]==-1){
        //printf("We can't delete the already deleted index %s\n",tstr);
        }
        if(indices[0]!=-1 && indices[1]!=-1){
        delftind(indarr,indices[0]+1,indices[1]);
        long num = strtol(numb, NULL, 10);
        //printf("So we delete them and now it is: %s\n",indarr);
        fisarr[fisp++]=arr[num];
        }
        tstr[0] = '\0';
    }
    if(indarr[1]!='\0'){
        goto work;
    }
    fisarr[fisp]='\0';
    return fisarr;
    free(arr);
    free(indarr);
}

int main(){
    srand(time(NULL));
    int tms;
    scanf("%d",&tms);
    char *ttarr[tms];
    for(int i=0;i<tms;i++){
        ttarr[i] = malloc(100 * sizeof(char));
        scanf("%s",ttarr[i]);
    }
    //printf("\n\n\n\n\n\n");
    for(int i=0;i<tms;i++){
        //printf("Taken as: %s\n",ttarr[i]);
        for (int k = 0; k < 50; k++) {
            char temp[1000];
            jargon(ttarr[i], temp);
            if (strcmp(ttarr[i], temp) != 0) {
                printf("YES\n");
                printf("%s\n", temp);
                temp[0]='\0';
                k = 50;
                goto skip;
            }
        }
        printf("NO\n");
        skip:
        ;
    }
    for(int i=0;i<tms;i++){
        free(ttarr[i]);
    }
}
