#include<iostream>
#include<cstdio>
using namespace std;
int cas[100010];
int main()
{
	int n,i,last=2000000000,ans=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&cas[i]);
	for(i=1;i<=n;i++)
	{
		if(last>=cas[i])
		{
			last=cas[i];
		}
		else
		{
			last=cas[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
