#include <stdio.h>


int main(){
    float a = 1.0f;
    float b = 2.0f;
    float* c = &a;
    float* d = &b;
    printf("%f %f\n", a, b);
    float temp = *c;
    *c = *d;
    *d = temp;
    
    printf("%f %f", a, b);
}