#include<stdio.h>

int main()
{
    FILE *fp = fopen("data1.txt", "w");

    int x,y;
    int i;

    for(i = 0 ; i < 3 ; i++)
    {
        scanf("%d %d", &x, &y);
        fprintf(fp, "%d %d\n", x, y);
    }
    fclose(fp);

    return 0;
}
