#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
    double u,v,t,s,a;
    int k,l=1;

    while(scanf("%d",&k)==1 && k)
    {

        if(k==1)
        {
            cin>>u>>v>>t;
            a = (v-u)/t;
            s = u*t+(.5*(v-u)*t);
            printf("Case %d: %.3lf %.3lf\n",l,s,a);
            ///cout<<"Case "<<l<<": "<<s<<" "<<a<<'\n';

        }
        else if(k==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/2;

            s=(u+v)*t/2;

            printf("Case %d: %.3lf %.3lf\n",l,s,t);
            ///cout<<"Case "<<l<<": "<<s<<" "<<t<<'\n';


        }
        else if(k==3)
        {
            cin>>u>>a>>s;
            v=sqrt(pow(u,2)+2*a*s);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",l,v,t);
            ///cout<<"Case "<<l<<": "<<v<<" "<<t<<'\n';
        }
        else
        {
            cin>>v>>a>>s;
            u=sqrt(pow(v,2) - (2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",l,u,t);
            ///cout<<"Case "<<l<<": "<<u<<" "<<t<<'\n';
        }

        ++l;

    }


    return 0;
}
