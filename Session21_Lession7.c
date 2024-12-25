#include<stdio.h>
#include<string.h>
struct Student {
    char id[50];
    char name[50];
    int age;
};

int main(){
    int numStudents; 
    printf("Moi ban nhap so luong sinh vien: ");
    scanf("%d", &numStudents);
    getchar();
    struct Student students[numStudents]; 

    for(int i = 0; i < numStudents; i++){
        printf("Moi ban nhap id: ");
        fgets(students[i].id, 50, stdin);
        printf("Moi ban nhap ten cua %s: ", students[i].id);
        fgets(students[i].name, 50, stdin);
        printf("Moi ban nhap tuoi cua %s: ", students[i].id);
        scanf("%d", &students[i].age);
        getchar();
    }

    FILE *outputFile = fopen("students.txt", "w"); 
    for(int i = 0; i < numStudents; i++){
        fprintf(outputFile, "\t%s", students[i].id);
        fprintf(outputFile, "%s", students[i].name);
        fprintf(outputFile, "\t%d\n", students[i].age);
    }
    fclose(outputFile);
    return 0;
}
