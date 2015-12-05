#include<vector>
#include<iostream>
using namespace std;
typedef pair<int,int> ii;
vector <ii> neigh[510];
int k,l,r,res,n,m;
bool taken[510];
void dfs(int v)
{
	taken[v]=true;
	for(int i=0;i<neigh[v].size();i++)
	{
		ii u=neigh[v][i];
		if(u.second<l||u.second>r&&!taken[u.first])
		dfs(u.first);
	}
}
int main()
{
	int a,b;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		neigh[a].push_back(ii(b,i));
		neigh[b].push_back(ii(a,i));
	}
	cin>>k;
	while(k--)
	{
		cin>>l>>r;
		for(int i=1;i<=n;i++)
		taken[i]=false;
		res=0;
		for(int j=1;j<=n;j++)
		if(!taken[j])
		{
			res++;
			dfs(j);
		}	
		cout<<res<<endl;	
	}
	return 0;
}
