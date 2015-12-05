#include<vector>
#include<iostream>
using namespace std;
vector <int> g[111];
bool cycle;
int u[111];
void dfs(int i)
{
	u[i]=1;
	for(int j=0;j<g[i].size();j++)
	{
		if(!u[g[i][j]]) dfs(g[i][j]);
		if(u[j]==1) cycle=true;
	}
	u[i]=2;
}
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1);
	if(cycle) cout<<"yes"; else cout<<"no";
	return 0;
}
