#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *dna = malloc(1500000 * sizeof(char));
    int *repl = malloc(1500000 * sizeof(int));
    if (dna == NULL || repl == NULL) {
        printf("Memory allocation failed!\n");
        free(dna);
        free(repl);
        return 1;
    }
    scanf("%1499999s",dna);
    char curr_ch = dna[0];
    int curr_len=0;
    int position=0;
    int overall_sequences=1;
    int lend = strlen(dna);
    for(int i=0;i<lend;i++){
        if(dna[i]==curr_ch){
            curr_len++;
        }
        if(dna[i]!=curr_ch){
            repl[position++]=curr_len;
            curr_ch=dna[i];
            curr_len=1;
            overall_sequences++;
        }
        }
    repl[position++]=curr_len;
    int longest_sequence=repl[0];
    int shortest_sequence=repl[0];
    for(int i=0; i<overall_sequences; i++){
        if(longest_sequence<repl[i]){
            longest_sequence=repl[i];
        }
        if(shortest_sequence>repl[i]){
            shortest_sequence=repl[i];
        }
    }
    printf("%d",longest_sequence);
    free(dna);
    free(repl);
    return 0;
}
