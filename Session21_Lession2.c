#include<stdio.h>
int main(){
    char firstCharacter; 
    FILE *filePointer;  
    
    filePointer = fopen("bt01.txt", "r");
    if (filePointer == NULL) { 
        printf("Khong the mo file.\n");
        return 1;
    }

    firstCharacter = fgetc(filePointer);
    printf("Ky tu dau tien cua file la: %c\n", firstCharacter);

    fclose(filePointer);
    return 0;
}
