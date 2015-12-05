#include <iostream>
using namespace std;
int bag[105];
int main()
{
	int n,sum=0,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
    {
		cin>>bag[i];
		sum+=bag[i];
	}
	for(int i=0;i<n;i++)
    {
		if((sum-bag[i])%2==0)
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
