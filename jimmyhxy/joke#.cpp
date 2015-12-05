#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int f[100010],b[100010],ans[100010];
int main()
{
	int n,m,i,last;
	scanf("%d%d",n,m);
	for(i=1;i<=n;i++)
		scanf("%d",f[i]);
	for(i=1;i<=m;i++)
		scanf("%d",b[i]);
	sort(f+1,f+n+1);
	sort(b+1,b+n+1);
	for(i=1;i<=(n>m)?n:m;i++)
	{
		if(b[i]==f[i]&&last!=b[i])
		{
			last=b[i];
			continue;
		}
		else
		{
			if
		}
	}
}
