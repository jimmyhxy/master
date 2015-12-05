#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

bool pri(int a)
{
	int i;
	for(i=2;i*i<=a;i++)
		if(a%i==0) return false;
	if(a<=1) return false;
	return true;
}

int main()
{
	int n,m,s=0,i;
	cin>>n>>m;
	if(n>m) swap(n,m);
	for(i=n;i<=m;i++)
	{
		if(pri(i)) s++;
	}
	cout<<s;
	return 0;
}
