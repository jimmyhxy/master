#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
using namespace std;

int wri[30];
int book[30][1111];
int maxb[30];

int main()
{
	string s;
	int i,j,n,bnum,sw,maxn=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&bnum);
		cin>>s;
		sw=s.length();
		for(j=0;j<sw;j++)
		{
			wri[s[j]-64]++;
			book[s[j]-64][++maxb[s[j]-64]]=bnum;	
		}
	}
	for(i=2;i<=26;i++)
		if(wri[i]>wri[maxn]) maxn=i;
	printf("%c\n%d\n",(maxn+64),maxb[maxn]);
	for(i=1;i<=maxb[maxn];i++)
		printf("%d\n",book[maxn][i]);
	return 0;
}
