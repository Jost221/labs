#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("./data.txt", "wb");
    int arr[20];
    for(int i=0; i<20; i++){
        *(arr+i) = rand()%200;
        printf("%d\t", *(arr+i));
    }
    printf("\n");
    printf("\n");  
    if(fp == NULL){
        printf("Failed to open file file\n");
        return 1;
    }
    fwrite(arr, sizeof(*arr), 20, fp);
    fclose(fp);
    fp = fopen("./data.txt", "rb");
    if(fp == NULL){
        printf("Failed to open file file\n");
        return 1;
    }
    int buffer[256];

    while (fread(buffer, 1, 80, fp) > 0)
    {
        for (int i = 0; i < 20; i++)
        {
            printf("%d\t", buffer[i]);
        }
        printf("\n");
    }
    fclose(fp);
}