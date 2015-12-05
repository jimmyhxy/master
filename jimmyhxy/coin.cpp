#include<iostream>
using namespace std;
int main()
{
	int n,i,ans=0;
	cin>>n;
	for(i=1;i<20000;i++)
	{
		if(n>=i)
		{
			n-=i;
			ans+=i*i;
		}
		else
		if(n<=0)
			break;
		else
		{
			ans+=n*i;
			n-=i;
		}
	}
	cout<<ans<<endl;
	return 0;
}
