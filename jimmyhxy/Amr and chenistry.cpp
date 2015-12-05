#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
const int maxn=100005;
const int maxl=20;
int n,a[maxn],len,lcp;
string s[maxn],res[maxn];
void tobinary(string s,int & stmp,int x)
{
	len=0;
	while(x)
	{
		if(x & 1)
		s[len++]='1';
		else
		s[len++]='0';
		x>>=1;
	}
	reverse(s,s+len);
}
int dist(string s,int slen,char t[maxlen],int tlen)
{
	int d=min(slen,tlen)
	for(int i=1;i<=min(slen,tlen);i++)
	{
		if(s[i]!=t[i])
		{
			d=i;
			break;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)c
	{
		int a;
		cin>>a;
		tobinary()
	}
	return 0;
}
