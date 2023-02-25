#include <stdio.h>

int main(){
    int a = 0;
    int *b = &a;
    printf("%d %p", *b, b);
}