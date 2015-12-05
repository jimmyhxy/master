#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

char g[30][30];
int n,m;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
int ax,ay,gx,gy,px,py;
int d[30][30][30][30];
queue<int> Q;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>g[i]+1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(g[i][j]=='A')
			{
				ax=i;
				ay=j;
				g[i][j]='.';
			}
			if(g[i][j]=='G')
			{
				gx=i;
				gy=j;
				g[i][j]='.';
			}
			if(g[i][j]=='P')
			{
				px=i;
				py=j;
				g[i][j]='.';
			}
		}
	}
	memset(d,-1,sizeof(d));
	d[ax][ay][gx][gy]=0;
	Q.push(ax);
	Q.push(ay);
	Q.push(gx);
	Q.push(gy);
	while(!Q.empty())
	{
		ax=Q.front(),Q.pop();
		ay=Q.front(),Q.pop();
		gx=Q.front(),Q.pop();
		gy=Q.front(),Q.pop();
		
		if(ax==px && ay==py)
		{
			cout<<d[ax][ay][gx][gy]<<endl;
			return 0;
		}
		for (int i=0;i<4;i++)
		{
			int x=ax+dx[i];
			int y=ay+dy[i];
			if(g[x][y]=='.')
			{
				int X=gx,Y=gy;
				if(y<Y && g[X][Y-1]=='.')
					Y--;
				else if(y>Y && g[X][Y+1]=='.')
					Y++;
				else if(x<X && g[X-1][Y]=='.')
					x--;
				else if(x>X && g[X+1][Y]=='.')
					x++;
				if((x!=X||y!=Y)&&!~d[x][y][X][Y])
				{
					d[x][y][X][Y]=d[ax][ay][gx][gy]+1;
					Q.push(x);
					Q.push(y);
					Q.push(X);
					Q.push(Y);
				}
			}
		}
	}
}
