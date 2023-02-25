#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arr = (int*)malloc(15*sizeof(int));
    int max = -1486618624;
    for (size_t i = 0; i < 15; i++) if(*(arr+i) > max) max = *(arr+i);
    printf("%d\n", max);
    free(arr);
    arr = (int*)malloc(20*sizeof(int));
    for(size_t i = 0; i<20;i++) *(arr+i) = i;
    for(size_t i = 0; i<20; i++) printf("arr[%d] = %d\n",i, *(arr+i));
    free(arr);
}