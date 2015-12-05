#include<iostream>
using namespace std;
int n;
char tab[305][305],t;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>tab[i][j];
	for(int i=1;i<n;i++)
	{
		if(tab[i][i]!=tab[i+1][i+1])
		{
			cout<<"NO";
			return 0;
		}
		if(tab[i][n+1-i]!=tab[i+1][n-i])
		{
			cout<<"NO";
			return 0;
		}
	}
	t=tab[1][2];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
				continue;
			else
				if(tab[i][j]!=t)
				{
					cout<<"NO";
					return 0;
				}
			else
				if(t==tab[1][1])
				{
					cout<<"NO";
					return 0;
				}
		}
	}
	cout<<"YES";
    return 0;
}
