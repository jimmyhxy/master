#include<iostream>
#include<string.h>
using namespace std;
char mine[121][121];
int point[2][22222];
int main()
{
	int n,m,i,j,mi=0;
	char t;
	cin>>n>>m;
	for(i=0;i<111;i++)
		memset(mine[i],'0',sizeof(mine[i]));
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>t;
			if(t=='*')
			{
				mi++;
				point[0][mi]=i;point[1][mi]=j;
				mine[i-1][j-1]+=1;mine[i-1][j]+=1;mine[i-1][j+1]+=1;
				mine[i+1][j-1]+=1;mine[i+1][j]+=1;mine[i+1][j+1]+=1;
				mine[i][j-1]+=1;mine[i][j+1]+=1;
			}
		}
	}
	for(i=1;i<=mi;i++)
	{
		mine[point[0][i]][point[1][i]]='*';
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
			cout<<mine[i][j];
		cout<<endl;
	}
	return 0;
}

