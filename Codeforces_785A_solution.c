#include <stdio.h>
#include <string.h>

int main(){
    char myArray[200000][21];
    int desiredint;
    scanf("%d",&desiredint);
    for (int i=0;i<desiredint;i++){
        scanf("%s", myArray[i]);
    }
    int facecount = 0;
    for (int i = 0; i < desiredint; i++) {
    if(strcmp(myArray[i], "Tetrahedron") == 0) {
        facecount = facecount + 4;
    }
    else if (strcmp(myArray[i], "Cube") == 0) {
        facecount = facecount + 6;
    }
    else if (strcmp(myArray[i], "Octahedron") == 0) {
        facecount = facecount + 8;
    }
    else if (strcmp(myArray[i], "Dodecahedron") == 0) {
        facecount = facecount + 12;
    }
    else if (strcmp(myArray[i], "Icosahedron") == 0) {
        facecount = facecount + 20;
    }
    }
    printf("%d",facecount);
}