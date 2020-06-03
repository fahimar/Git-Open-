#include<stdio.h>
#include<string.h>

typedef struct store store;
struct store
{
    char name[20];
    int AccountNo;
    float blance;


    store()
    {
        //
    }


    store(char s[],int no,float bal)
    {
        strcpy(name,s);
        AccountNo=no;
        blance=bal;
    }


    void printInf()
    {
        puts(name);
        printf( "Account Number=%d \n Balance=%f \nm",AccountNo,blance);

    }





};

void blanceCheck(store s[],int n)
{


    for(int i=0; i<n; i++)
    {
        if(s[i].blance<2000)
        {
            s[i].printInf();
        }
    }
}


void add(store s[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(s[i].blance>5000)
        {
            s[i].blance+=1000;
            s[i].printInf();
        }
    }


}
    int main()
    {
        int n;
        printf("enter the number of the input\n");
        scanf("%d",&n);

         store s[n],s1;
        for(int i=0; i<n; i++)
        {

            char name[20];
            int a;
            float b;
            gets(name);

           // scanf("%d%f",&a,&b);
            //s[i].store(name,a,b);
            gets(s[i].name);
            scanf("%d",&s[i].AccountNo);
           scanf("%d",&s[i].blance);
        }



      /*  for(int i=0; i<n; i++)
        {
            s[i];
        }

*/
        blanceCheck(s,n);
        add(s,n);


return 0;
}
