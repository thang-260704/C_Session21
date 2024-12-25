#include<stdio.h>
int main(){
    char inputText[100]; 
    fgets(inputText, 100, stdin);
    FILE *filePointer;
    filePointer = fopen("bt01.txt", "w");
    fprintf(filePointer, "%s", inputText);
    fclose(filePointer);
    return 0;
}
