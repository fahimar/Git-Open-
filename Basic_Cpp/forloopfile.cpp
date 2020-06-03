// 1^2 x 3^2 x 5^2 x .......x n^2
#include<stdio.h>

int main()
{
    FILE *fp;
    int c,result;
    fp = fopen("multi.txt","w");
    printf("Enter n:");
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }

    fclose(fp);
    fp = fopen("multi.txt", "r");



        int i;
        for( i = 1 ; i < c ; i+=2)
        {
            result *= (i*i);
        }

    printf("%d ",result);
    fclose(fp);
}
