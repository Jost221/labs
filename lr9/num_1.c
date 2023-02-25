#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct shop
{
    char* product;
    float price;
    int quantity;
};

char* get_struct(struct shop* product){
    char* result = (char*)malloc(sizeof(char)*100);
    sprintf(result, "Наименование: %s\nКоличество: \nЦена: %.2f\n", product->product, product->quantity, product->price);
    return result;
}

int main(){
    struct shop kefir;
    kefir.product = "kefir";
    kefir.price = 49.90;
    kefir.quantity = 10;
    printf("%s", get_struct(&kefir));
}