#include <bits/stdc++.h>
using namespace std;
#define str string
#define nl endl
#define nw cout<<endl
#define pb push_back
#define spc " "
#define tc(t) while(t--)
#define FAST  ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
typedef long long int lld;
int italic(str& a,int i,int n){
    for(;a[i]!='_'&&i<n;i++) cout<<a[i];
    if(i!=n) cout<<"</i>";
    return i;
}
int bold(str& a,int i,int n){
    for(;a[i]!='*'&&i<n;i++) cout<<a[i];
    if(i!=n) cout<<"</b>";
    return i;
}
int main()
{
    FAST;
    int i;
    str a;
    while(getline(cin,a)){
        for(i = 0; i < a.size(); i++){
            if(a[i]=='_'){
                cout<<"<i>";
                i++;
                i = italic(a,i,a.size());
            }
            else if(a[i]=='*'){
                cout<<"<b>";
                i++;
                i = bold(a,i,a.size());
            }
           
            else if(a[i] == '*_' )
            {
				
				cout<<'<b>'<<'<i>';
				i++;
				i = bold(a,i,a.size());
				
				}
				 else if(a[i] == '_*')
            {
				
				cout<<'<i>'<<'<b>';
				i++;
				i = bold(a,i,a.size());
				
				}
            else cout<<a[i];
        }
        nw;
    }
    return 0;
}
