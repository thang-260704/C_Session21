#include<stdio.h>

int main(){
    FILE *sourceFile, *destFile; 
    char character;             
    sourceFile = fopen("bt01.txt", "r");
    destFile = fopen("bt06.txt", "w");

    if (sourceFile == NULL || destFile == NULL) { 
        printf("Khong the mo file.\n");
        return 1;
    }

    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
