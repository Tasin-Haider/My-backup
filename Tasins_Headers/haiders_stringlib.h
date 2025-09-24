#ifndef haiders_stringlib_H
#define haiders_stringlib_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    size_t cursor;
    int arr[];
} REPEATATION_LIST;

// Function prototypes
void spsstrcpy(char a[], char b[], int c);
char *delfind(char *arr, int ind);
void revstr(char *arr);
void spsstrcpyv2(const char a[], char b[], int c, int d);
int *searchsubstr(char *arr, char *subarr);
void delftind(char *arr, int stind, int edind);
REPEATATION_LIST *search_reps(char *arr, char c);

// Function implementations
void spsstrcpy(char a[], char b[], int c) {
    for(int i = 0; i != c + 1; i++) {
        b[i] = a[i];
    }
    b[c + 1] = '\0';
}

char *delfind(char *arr, int ind) {
    int len = strlen(arr);
    for(int i = ind; i < len; i++) {
        arr[i] = arr[i + 1];
    }
    return arr;
}

void revstr(char *arr) {
    int len = strlen(arr);
    char *arrcp = malloc(len * sizeof(char));
    strcpy(arrcp, arr);
    for(int i = 0; i < len; i++) {
        arr[len - i - 1] = arrcp[i];
    }
    free(arrcp);
}

void spsstrcpyv2(const char a[], char b[], int c, int d) {
    int j = 0;
    for (int i = c; i <= d && a[i] != '\0'; i++) {
        b[j++] = a[i];
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

REPEATATION_LIST *search_reps(char *arr, char c) {
    int rep_c = 0, index_cursor = 0;
    int len = strlen(arr);
    int *index_list = malloc(len * sizeof(int));

    for(int i = 0; i < len; i++) {
        if(arr[i] == c) {
            rep_c++;
            if(i == len - 1 || arr[i + 1] != c) {
                index_list[index_cursor++] = rep_c;
                rep_c = 0;
            }
        }
    }

    REPEATATION_LIST *list1 = malloc(sizeof(REPEATATION_LIST) + index_cursor * sizeof(int));
    if(!list1) {
        free(index_list);
        return NULL;
    }

    list1->cursor = index_cursor;
    memcpy(list1->arr, index_list, index_cursor * sizeof(int));
    free(index_list);
    return list1;
}

#endif // haiders_stringlib_H
