#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    char ch;
    int size = 0;

    fp = fopen("MyFile.txt", "r");
    if(fp == NULL)
    {
        printf("\nFile unable to open...");
    }
    else{
        printf("\nFILE opened...");
    }
    fseek(fp, 0, 2);
    size = ftell(fp);
    printf("The size of given file is: %d\n", size);
    fclose(fp);
}
