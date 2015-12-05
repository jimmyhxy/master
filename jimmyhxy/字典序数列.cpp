#include<iostream>
#include<algorithm>
using namespace std;
int n,i,it,x,a[305],w[305];
char s[305][305];
bool u[305];
void dfs(int i)
{
	if(!u[a[i]]) x=min(x,a[i]);
		w[i]=it;
	for(int j=0;j<n;j++)
		if(s[i][j]=='1'&&w[j]!=it) 
			dfs(j);
}
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<n;i++)
	{
		it++;
		x=n;
		dfs(i);
		u[x]=true;
		cout<<x<<" ";
	}
	return 0;
}
