#include <stdio.h>
#include <stdlib.h>

struct value {
    int m;
    int n;
};

void print(struct value* v) {
    printf("%d/%d\n", v->m, v->n);
}

struct value* sum(struct value* a, struct value* b) {
    struct value c;
    c.m = a->m * b->m;
    c.n = a->n*b->m + b->n*a->m;
    return &c;
}


int main() {
    struct value a, b;
    printf("Введите числитель первого числа");
    scanf("%d", &a.n);
    printf("Введите знаменатель первого числа");
    scanf("%d", &a.m);
    printf("Введите числитель второго числа");
    scanf("%d", &b.n);
    printf("Введите знаменатель второго числа");
    scanf("%d", &b.m);
    struct value* c = sum(&a, &b);
    print(c);
}
