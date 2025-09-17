#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int chk_hq9_ext(const char *filename){
    const char *ext =strrchr(filename, '.');
    if(strcmp(ext, ".hq9")==0){
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("Usage: %s <filename.hq9>\n", argv[0]);
        return 1;
    }
    char *filename = argv[1];
    if(chk_hq9_ext(filename)==1){
        printf("Files must be in .hq9 format. Ex: input.hq9");
        return 1;
    }
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    FILE *fpa = fopen("99.txt","r");
        if (fpa == NULL) {
        perror("Error opening 99 Bottles of Beer on the Wall");
        return 1;
        }
    char line[34];
    int acm, ch, pos =0;
    while ((ch = fgetc(fp)) != EOF) {
        switch (ch) {
        case 'H':
            printf("Hello, World!\n");
            break;

        case 'Q':{
            pos = ftell(fp);
            fseek(fp, 0, SEEK_SET);
            char cha;
            while ((cha = fgetc(fp)) != EOF) {
            putchar(cha);
            }
            putchar('\n');
            fseek(fp, pos, SEEK_SET);
            break;
            }

        case '9':
            fseek(fpa, 0, SEEK_SET);
            while (fgets(line, sizeof(line), fpa)) {
            printf("%s", line);
            }
            putchar('\n');
            break;

        case '+':
            acm++;
            break;

        default:
            break;
        }
    }
    fclose(fp);
    fclose(fpa);
}
