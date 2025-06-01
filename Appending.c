#include <stdio.h>
#include <string.h>

int ch=0;
int j=0;

void spsstrcpy(char a[], char b[], int c, int d){
    for(int i=c;i!=d+1;i++){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    j=0;
}
int main() {
    char a[5000];
    char em[]={0};
    char d_sps[] = "%20";
    char d_qst[] = "%3F";
    char d_com[] = "%2C";
    char d_atr[] = "%40";
    char d_and[] = "%26";
    char bft[5000]={0};
    char fin[5000]={0};
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin);
    printf("Taken as: %s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            spsstrcpy(a,bft,ch, i-1);
            strcat(bft, d_sps);
            strcat(fin, bft);
            strcpy(bft,em);
            ch=i+1;
        }
        else if(a[i]=='?'){
            spsstrcpy(a,bft,ch, i-1);
            strcat(bft, d_qst);
            strcat(fin, bft);
            strcpy(bft,em);
            ch=i+1;
        }
        else if(a[i]==','){
            spsstrcpy(a,bft,ch, i-1);
            strcat(bft, d_com);
            strcat(fin, bft);
            strcpy(bft,em);
            ch=i+1;
        }
        else if(a[i]=='@'){
            spsstrcpy(a,bft,ch, i-1);
            strcat(bft, d_atr);
            strcat(fin, bft);
            strcpy(bft,em);
            ch=i+1;
        }
        else if(a[i]=='&'){
            spsstrcpy(a,bft,ch, i-1);
            strcat(bft, d_and);
            strcat(fin, bft);
            strcpy(bft,em);
            ch=i+1;
        }
    }
     spsstrcpy(a, bft, ch, strlen(a) - 1);
     strcat(fin, bft);
     strcpy(bft,em);
     printf("%s",fin);
    return 0;
}
