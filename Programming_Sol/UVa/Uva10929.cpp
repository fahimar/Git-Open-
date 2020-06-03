#include "bits/stdc++.h"
#include<cmath>

using namespace std;
typedef long long li;

const li mod = 998244353;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    char n[10001];
    int sum=0;
    bool found = 0;
    while(1)
    {
        cin >> n;

        if(n[0] == '0' && strlen(n) == 1)
        {
            break;
        }

        for(int i = 0; i<strlen(n); i+=2)
        {
            sum += n[i] - '0';
        }
        for(int i=1; i<strlen(n); i+=2)
        {
            sum -= n[i]-'0';
        }

        if(sum%11==0)
        {
            cout<<n<<" is a multiple of 11."<<"\n";


        }
        else
            cout<<n<<" is not a multiple of 11."<<"\n";



    }


    return 0;
}


