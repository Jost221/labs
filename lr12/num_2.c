#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    unsigned char buffer[80];
    int i;
    char *aboba = "aboba";
    fp = fopen("data.bin", "w");
    if (fp)
    {
        fputs(aboba, fp);
        fclose(fp);
    }
    // Open the binary file
    fp = fopen("data.txt", "rb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read and print the binary data in hex
    while (fread(buffer, 1, 20, fp) > 0)
    {
        for (i = 0; i < 10; i++)
        {
            printf("\033[104m \033[97m%02X", buffer[i]);
        }
        printf("\n\033[49m");
    }

    fclose(fp);
    return 0;
}