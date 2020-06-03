 #include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>
#define FOR(i,s,e) for(int i=(s);i<(e);)
using namespace std;
typedef long l;

int count_downs(char str[]);
int main()
{
	char str[10000];
	l T,count = 0;
	
	cin >> T;
	while(T--){
		
		scanf(" %[^\n]",str);
		
			count = count_downs(str);
			
			printf("%ld\n",count+1);
		}
	
	
 return 0;
}
int count_downs(char str[])
{
    l len,count=0;
    len=strlen(str);
    FOR(i,0,len)
    {
        if(str[i]== ' ')
        {
           while(str[i]== ' ')
           {
               i++;
           }
           count++;
        }
        else
        {
            i++;
        }
    }
    return count;
}
