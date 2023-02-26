#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#define _CRT_SECURE_NO_WARNINGS;

struct my_tm{
    int day;
    char* month;
    char* day_of_week;
    char* time;
};

char* settime(struct tm *u)
{
    char s[40];
    char *tmp;
    for (int i = 0; i<40; i++) s[i] = 0;
    int length = strftime(s, 40, "%d.%m.%Y %H:%M:%S, %A", u);
    tmp = (char*)malloc(sizeof(s));
    strcpy(tmp, s);
    return(tmp);
}

char* get_month(int month){
    switch (month){
    case 1:
        return("Января");
    case 2:
        return("Февраля");
    case 3:
        return("Марта");
    case 4:
        return("Апреля");
    case 5:
        return("Мая");
    case 6:
        return("Июня");
    case 7:
        return("Июля");
    case 8:
        return("Августа");
    case 9:
        return("Сентября");
    case 10:
        return("Октября");
    case 11:
        return("Ноября");
    case 12:
        return("Декабря");
    }
}

char* get_day_of_week(int day){
    switch(day) {
        case 0:
            return("понедельник");
        case 1:
            return("вторник");
        case 2:
            return("среда");
        case 3:
            return("четверг");
        case 4:
            return("пятница");
        case 5:
            return("суббота");
        case 6:
            return("воскресенье");
    }
}

int main() {
    struct tm *u;
    char *f;
    const time_t timer = time(NULL);
    u = localtime(&timer);
    f = settime(u);
    struct my_tm val;
    val.day = u->tm_mday;
    val.month = get_month(u->tm_mon+1);
    val.day_of_week = get_day_of_week(u->tm_wday);
    sprintf(val.time, "%d:%d", u->tm_hour, u->tm_min);
    printf("Сегодня: %d %s, %s, текущее время: %s\n", val.day, val.month, val.day_of_week, val.time);
    return 0;
}