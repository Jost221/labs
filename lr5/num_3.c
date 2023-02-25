#include <stdio.h>

void foo(int* a){
    *a *=2;
}

int main(){
    int i;
    scanf("%d", &i);
    foo(&i);
    printf("%d\n", i);
}