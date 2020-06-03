#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

struct Interval
{
	int init,last;
	};
bool compare(Interval a,Interval b)
{
	return (a.init < b.init);
}
int main()
{
		int t,i,j;
        int a[1000];
		cin >> t;
		for( j=0;j<t;++j){
	      for(i=0;i<t;i++)
	      {
			   cin >> a[i];		   
		  }   
	   } 
	   sort(a,a+t,compare);
	  for( j=0;j<t;++j)
      for(i=0;i<t;i++) 
      {
		  cout<<a[i]<<" ";
		  
	  }
	   cout<<"\n";
  	 
		
		
		return 0;
	}
