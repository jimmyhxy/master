#include<cstdio>
#include<cstring>
int n,m,q,l,r,x[11111],y[11111];
struct dsu
{
	int f[555],c;
	int get(int x)
	{
		return f[x]?f[x]=get(f[x]):x;
	}
}
