#include <stdio.h>
#include <stdlib.h>

struct student
{
    char* name;
    char* surname;
    char* patronomic;
    int exam_1;
    int exam_2;
    int exam_3;
};

int main(){
    int count = 0;
    scanf("%d", count);
    struct student* students = (struct student*)malloc(count * sizeof(struct student));
    for (size_t i = 0; i < count; i++)
    {
        printf("Введите имя студента %d:", i+1);
        char* name;
        scanf("%s", name);
        (students+i)->name = name;
        printf("Введите фамилию студента %d:", i+1);
        char* surname;
        scanf("%s", surname);
        (students+i)->surname = surname;
        printf("Введите фамилию студента %d:", i+1);
        char* patronomic;
        scanf("%s", patronomic);
        (students+i)->patronomic = patronomic;
        printf("Введите баллы за 1-ый экзамен: ");
        int exam_1;
        scanf("%d", &exam_1);
        (students+i)->exam_1 = exam_1;
        printf("Введите баллы за 2-ой экзамен: ");
        int exam_2;
        scanf("%d", &exam_2);
        (students+i)->exam_2 = exam_2;
        printf("Введите баллы за 3-ий экзамен: ");
        int exam_3;
        scanf("%d", &exam_3);
        (students+i)->exam_3 = exam_3;
    }
    for(struct student* st=students;st < students+count;st++){
        printf("Студент %s %s %s набрал %d баллов", st->surname, st->name, st->patronomic, st->exam_1+st->exam_2+st->exam_3);
    }

}