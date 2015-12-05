#include<iostream>
#include<string>
using namespace std;
const int Inf=2147483647;
int zero[1001][1001][2];
bool g[1001][1001][2];
int n;
int i,j,k,x=0;
void pr(int x,int y)
{
	if (x==1&&y==1)
		return;
	if (g[x][y][k])
	{
		pr(x-1,y);
		cout<<'D';
	}
	else
	{
		pr(x,y-1);
		cout<<'R';
	}
}
int main()
{
	cin>>n;
	for(i=2;i<=n;i++)
	{
		zero[0][i][0]=Inf;
		zero[0][i][1]=Inf;
		zero[i][0][0]=Inf;
		zero[i][0][1]=Inf;
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>k;
			if (!k)
				x=i;
			else
			{
				for(k;(k%5)==0;k/=5)
					zero[i][j][1]++;
				for(k;(k%2)==0;k/=2)
					zero[i][j][0]++;
			}
			for (k=0;k<2;++k)
			g[i][j][k]=zero[i-1][j][k]<zero[i][j-1][k];
				if (g[i][j][k])
					zero[i][j][k]+=zero[i-1][j][k];
				else
					zero[i][j][k]+=zero[i][j-1][k];
		}
	k=zero[n][n][1]<zero[n][n][0];
	if (x&&zero[n][n][k]>1)
	{
		cout<<1<<endl;
		for (i=2;i<=x;++i)
			cout<<'D';
		for (i=2;i<=n;++i)
			cout<<'R';
		for (i=x+1;i<=n;++i)
			cout<<'D';
	}
	else
	{
		cout<<zero[n][n][k]<<endl;
		pr(n,n);
	}
	return 0;
}
