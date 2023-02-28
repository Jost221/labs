#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    FILE *fp = fopen("./data.txt", "r");
    if(fp == NULL){
        printf("Failed to open file %s\n", argv[1]);
        return 1;
    }

    fseek(fp, 0L, SEEK_END);
    size_t size = ftell(fp);
    fseek(fp, 0L, SEEK_SET);

    char *buffer = (char *)malloc(size + 1);
    if(buffer == NULL){
        printf("Failed to allocate memory\n");
        fclose(fp);
        return 1;
    }

    fread(buffer, 1, size, fp);
    buffer[size] = '\0';
    fclose(fp);
    return 0;
}