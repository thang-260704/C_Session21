#include<stdio.h>

int main(){
    int numLines; 
    printf("Moi ban nhap so dong: ");
    scanf("%d", &numLines);
    getchar();
    char lines[numLines][100]; 
    for(int i = 0; i < numLines; i++) {
        printf("Moi ban nhap noi dung dong thu %d: ", i + 1);
        fgets(lines[i], 100, stdin);
    }

    FILE *filePointer = fopen("bt05.txt", "w"); 
    for(int i = 0; i < numLines; i++) {
        fprintf(filePointer, "%s", lines[i]);
    }
    fclose(filePointer);
    return 0;
}
