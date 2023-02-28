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
    while (fread(buffer, 1, 80, fp) > 0)
    {
        for (i = 0; i < 80; i++)
        {
            printf("\x1b[1;36m%02X \x1b[0m", buffer[i]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}