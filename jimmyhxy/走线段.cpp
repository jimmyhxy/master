#include<iostream>
using namespace std;
int q,n,v[100];
struct interval
{
	int s,t;
}a[100];
void dfs(int n)
{
	int i;
	v[n]=1;
	for(i=0;i<n;i++)
	{
		if(((a[i].s<a[n].s<a[n].t)||(a[i].s<a[n].t&&
		a[n].t<a[i].t))&&!v[i]) dfs[i];
	}
}
int main()
{
	cin>>q;
	int i,j,x,y,z;
	for(i=0;i<q;i++)
	{
		cin>>z>>x>>y;
		if(z==1)
		{
			a[n].s=x;
			a[n].t=y;
			n++;
		}
		else
		{
			--x;
			--y;
			for(j=0;j<n;j++)
			v[j]=0;
			dfs(x);
			if(v[y])
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
