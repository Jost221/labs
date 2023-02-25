#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(NULL);
    int* arr = (int*)malloc(sizeof(int)*30);
    for (size_t i = 0; i < 30; i++) *(arr + i) = rand()%80-40;
    for (size_t i = 0; i < 30; i++) printf("%d ", *(arr+i));
    free(arr);
}