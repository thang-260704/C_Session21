#include<stdio.h>
int main(){
    char fileLine[1000]; 
    FILE *filePointer;  
    filePointer = fopen("bt01.txt", "r");
    if (filePointer == NULL) { 
        printf("Khong the mo file.\n");
        return 1;
    }

    fgets(fileLine, 1000, filePointer);
    printf("Dong 1 cua file la: %s", fileLine);
    fclose(filePointer);
    return 0;
}
