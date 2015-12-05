#include<iostream>
#include<cstdio>
using namespace std;

bool pri(int a)
{
	int i;
	for(i=2;i*i<=a;i++)
		if(a%i==0) return false;
	return true;
}

int rou(int a)
{
	int t,m=0;
	t=a;
	while(t) 
	{ 
		m=m*10+t%10; 
		t=t/10; 
	} 
	return (m==a); 
}

int main()
{
	int s=0,i,n;
	cin>>n;
	for(i=11;i<=n;i++)
	{
		if(pri(i)&&rou(i)) s++;
	}
	cout<<s;
	return 0;
}
