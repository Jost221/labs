#include <stdio.h>
#include <stdlib.h>
#define COUNT 5

struct student {
    char* name;
    char* surname;
    char* patronomic;
    char* group;
    int score_1;
    int score_2;
    int score_3;
};

int main(){
    // struct student* students = (struct student*) malloc(sizeof(struct student)*COUNT);
    // for(int i=0; i<COUNT; i++){
    //     printf("Введите имя студента %d:", i+1);
    //     char* name;
    //     scanf("%s", &name);
    //     (students+i)->name = name;
    //     printf("Введите фамилию студента %d:", i+1);
    //     char* surname;
    //     scanf("%s", surname);
    //     (students+i)->surname = surname;
    //     printf("Введите отчество студента %d:", i+1);
    //     char* patronomic;
    //     scanf("%s", patronomic);
    //     (students+i)->patronomic = patronomic;
    //     printf("Введите группу студента %d:", i+1);
    //     char* group;
    //     scanf("%s", group);
    //     (students+i)->group = group;
    //     printf("Введите оценку за 1-ый предмет: ");
    //     int score_1;
    //     scanf("%d", &score_1);
    //     (students+i)->score_1 = score_1;
    //     printf("Введите оценку за 2-ой предмет: ");
    //     int score_2;
    //     scanf("%d", &score_2);
    //     (students+i)->score_2 = score_2;
    //     printf("Введите оценку за 3-ий предмет: ");
    //     int score_3;
    //     scanf("%d", &score_3);
    //     (students+i)->score_3 = score_3;
    // }
    // FILE* fp = NULL;
    // fp = fopen("student.txt", "wb");
    // fp != NULL ? : exit(1);
    // fwrite(students, sizeof(students), COUNT, fp);
    // fclose(fp);
    FILE* fp = fopen("student.txt", "rb");
    fp != NULL ? : exit(1);
    struct student* buffer = (struct student*) malloc(sizeof(struct student)*COUNT);
    fread(buffer, sizeof(buffer), COUNT, fp);
    for (int i = 0; i < COUNT; i++)
    {
        // printf("Name: %s\n", (buffer+i)->name);
        printf("Surname: %s\n", (buffer+i)->surname);
        printf("Patronomic: %s\n", (buffer+i)->patronomic);
        printf("Group: %s\n", (buffer+i)->group);
        printf("Score 1: %d\n", (buffer+i)->score_1);
        printf("Score 2: %d\n", (buffer+i)->score_2);
        printf("Score 3: %d\n", (buffer+i)->score_3);
    }
    
}