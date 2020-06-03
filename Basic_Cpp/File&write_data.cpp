#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fptr;
    char name[20];
    int age;
    double salary;

    fptr = fopen("emp.txt","w");

    if(fptr == NULL)
    {
        printf("File does not exits.\n");
        return 0;
    }
    printf("Enter the name:\n");
    scanf("%s",&name);
    fprintf(fptr, "Name = %s\n", name);

    printf("Enter the age:\n");
    scanf("%d",&age);
    fprintf(fptr, "Age = %d\n", age);

    printf("Enter the Salary:\n");
    scanf("%lf",&salary);
    fprintf(fptr, "Salary = %lf\n", salary);

    fclose(fptr);

}
