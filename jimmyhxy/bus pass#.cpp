#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

vector<int> v[10010];
int q[10010],road[15][25];

void vc()
{
	for(int i=0;i<10000;i++)
		v[i].clear();
}

int main()
{
	int t,nz,nr,p,k,w;
	scanf("%d",&t);
	int t1=t;
	while(t--)
	{
		vc();
		memset(q,0,sizeof(q));
		scanf("%d%d",&nz,&nr);
		for(int i=1;i<=nz;i++)
		{
			scanf("%d%d",&p,&k);
			for(int j=1;j<=k;j++)
			{
				scanf("%d",&w);
				v[p].push_back(w);
			}
		}
	}
	return 0;
}
