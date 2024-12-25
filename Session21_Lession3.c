#include<stdio.h>
int main(){
    char userInput[100]; 
    fgets(userInput, 100, stdin);
    FILE *filePointer;  
    
    filePointer = fopen("bt01.txt", "a");
    if (filePointer == NULL) { 
        printf("Khong the mo file.\n");
        return 1;
    }
    
    fprintf(filePointer, "%s", userInput);
    fclose(filePointer);
    return 0;
}
