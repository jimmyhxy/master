#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  	double ans;
	int n,m;
  	cin>>n>>m;
  	if(n*m==1)
  	{
    	cout<<setiosflags(ios::fixed)<<setprecision(16)<<1.0000000000000000<<endl;
  	}
	else
	{
    	ans=((n*m-1.0)+(n-1.0)*(m-1.0))/(n*(n*m-1.0)); 
		cout<<setiosflags(ios::fixed)<<setprecision(16)<<ans<<endl;
  	}
}
