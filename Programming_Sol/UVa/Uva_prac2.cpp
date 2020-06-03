#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
#define FOE(i,s,e) for(int i = (s); i < (e); i++)
#define FOD(i,s,e) for(int j = (s); j < (e); j++)
#define ll long long
#define pb push_back
#define mp make_pair


int main()
{
    ll n,m,o[51],p,t;


    while(scanf("%d",&n)==1)
    {

        FOR(i,0,n)
        {
            int count = 0;
            cin>>m;
            FOE(i,0,m)  ///for(i = 1;i <=m;i++) scanf("%d",&o[i]);

            cin>>o[i];

            FOR(i,0,m-1)
            FOD(j,0,m-i-1)
            if(o[j] > o[j + 1])
            {
                count++;
                /*t=o[j];
                o[j]=o[j+1];
                o[j+1]=t;*/
               swap(o[j],o[j+1]);
            }

 printf("Optimal train swapping takes %d swaps.\n",count);

        }

    }
    return 0;
}
