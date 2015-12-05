#include<iostream>
using namespace std;
int fa[2333];
int find(int a)
{
	if(fa[a]==a) return a;
	fa[a]=find(fa[a]);
	return fa[a];
}

void comp(int a,int b)
{
	fa[find(a)]=find(b);
}

int main()
{
	int n,m,k,i,j,ans=1;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
		fa[i]=i;
	for(i=0;i<n-k+1;i++)
	{
		for(j=0;j<k/2;j++)
		{
			comp(i+j,i+k-j-1);
		}
	}
	for(i=0;i<n;i++)
		if(find(i)==i) ans=(int)(((long long)ans*m)%1000000007);
	cout<<ans<<endl;
}
