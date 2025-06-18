#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *delete_from_nth_index_to_index(char *str, int stind, int edind) {
    if (str == NULL) {
        return NULL;
    }

    int len = strlen(str);

    if (stind < 0 || edind < 0 || stind > edind || edind >= len) {
        return NULL;
    }

    int num_to_delete = edind - stind + 1;

    for (int i = stind; i < len - num_to_delete; i++) {
        str[i] = str[i + num_to_delete];
    }

    str[len - num_to_delete] = '\0';

    return str;
}

int main(){
    char arr[2000];
    scanf("%s",arr);
    delete_from_nth_index_to_index(arr,2,10);
    printf("%s",arr);
}
