#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct place

{
    char Name[50];
    int Rating ;
    char Location;

    struct  Location

    {
        double  Coordinate_X;
        double  Coordinate_Y;
        double x = Coordinate_X;
        double y = Coordinate_Y;
    };



};
storeInfo(char Name[],int Rating,char Location)
{
    char m = storeInfo.Name;
     int n = storeInfo.Rating;
     char o = storeInfo.Location;
    scanf("%[^\n]%s",m);
    scanf("%d",&n);
    scanf("%[^\n]%s",o); //strcpy(Location,s1);

}


int Show(char Name,int Rating,char Location)
{

    Show.shortInfo.m;
    Show.shortInfo.n;
    Show.shortInfo.o;

}

void Check_place(int argc, char* argv[],char* argv[])
{
    char EXIT,ADD,SHOW;
    for(;;)
    {
        int input;
        printf("Enter the required input :");
        scanf("%[^\n]%s",input);
        if(input == ADD)
        {


            {
                place(char s[],int Rating,char Location s1[])
                {

                    printf("Enter the Name:\n");

                    shortInfo.Name;;

                    printf("Enter the Rating:\n");

                    shortInfo.Rating;

                    printf("Enter the Location:\n");

                    shortInfo.Location;

                }
            }
            if(input == SHOW)
            {

                printf("Name = %s\n", Show.storeInfo.m);
                printf("Rating = %d\n", Show.storeInfo.n);
                printf("Location = %[^\n]%s\n", Show.storeInfo.o);
                place.location.x;
                place.location.y;

            }
            if(input == EXIT)
            {
                exit(0);
            }
        }
    }
}

};


int main()
{
    struct place place;
    //int place[],index = 0,var input;

    FILE *fptr;
    fptr = fopen("emp1.txt","w");

    if(fptr == NULL)
    {
        printf("File does not exits.\n");
        return 0;
    }
    else
    {
        Check_place();
    }

    fclose(fptr);


}






