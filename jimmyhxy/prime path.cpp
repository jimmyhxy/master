#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

vector<int> num[10010];
queue<int> q;
bool is_pri[10010];

void bfs(int n,int m)
{
	
}

void make_prime()
{
	for(int i=1000;i<=9999;i++)
	{
		is_pri[i]=true;
		for(int j=2;j*j<=i;j++)
			if(i%j==0)
			{
				is_pri[i]=false;
				break;
			}
		if(!is_pri[i]) break;
	}
}

void make_pic()
{
	make_prime();
	
}

int main()
{
	int n,i,j,sta,end;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&sta,&end);
		
	}
}
