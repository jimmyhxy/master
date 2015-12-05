#include<iostream>
#include<cstdio>
using namespace std;
bool a[10000005];
int main()
{
	int i,j,s=0,n;
	freopen("a.txt","r",stdin);
	cin>>n;
	for(i=2;i<=n;i++)
		a[i]=true;
	for(i=2;i<=n;i++)
	{
		if(a[i])
		{
			for(j=2;j*i<=n;j++)
				a[j*i]=false;
		}
		else
			continue;
	}
	for(i=2;i<=n;i++)
		s+=a[i];
	cout<<s;
	return 0;
}
