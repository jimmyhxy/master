#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;
int n,i,j,m1,m2,tot,a[110];
vector <int> g[110];
bool u[110],w[110],q=true;
string s[110];
void dfs(int i)
{
	u[i]=true;
	w[i]=true;
	for(int j=0;j<g[i].size();j++)
	{
		int k=g[i][j];
		if (!u[k]) dfs(k);
		else if(w[k]) q=false;
	}
	w[i]=false;
	a[++tot]=i;
}
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=1;i<n;i++)
	{
		m1=s[i-1].size();
		m2=s[i].size();
		for(j=0;j<m1&&j<m2&&s[i-1][j]==s[i][j];j++)
		if(j<m1&&j<m2)
		g[s[i-1][j]-'a'].push_back(s[i][j]-'a');
		else if(m1>m2) q=false;
	}
	for(i=0;i<26;i++)
	if(!u[i]) dfs(i);
	if(q)
	{
		for(i=tot;i>0;i--)
		putchar(a[i]+'a');
	}
	else cout<<"Impossible";
	return 0;
}
