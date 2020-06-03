#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,D;
    cin >>A>>B>>C>>D;
    int x,y;
    x = (A+D-1)/D;
    y = (B+C-1)/B;
    if (x>=y)
    {
        cout<<"Yes"<<"\n";
    }
    else cout<<"No"<<"\n";



    return 0;
}
