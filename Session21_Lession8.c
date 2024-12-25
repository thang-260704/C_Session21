#include<stdio.h>
#include<string.h>
struct Student { 
    char id[50];
    char name[50];
    int age;
};

int main(){
    struct Student students[100]; 
    char lines[100][100];        
    FILE *inputFile = fopen("students.txt", "r"); 

    for(int i = 0; i < 101; i++){
        fgets(lines[i], 100, inputFile);
        printf("%s", lines[i]);
        if(lines[i] == NULL){
            return 1;
        }
    }
    fclose(inputFile);
    return 0;
}
