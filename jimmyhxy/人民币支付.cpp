#include<iostream>
#include<cstdio>
using namespace std;
int money[]={0,100,50,20,10,5,1};

int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=6;i++)
	{
		cout<<n/money[i]<<endl;
		n=n%money[i];
	}
	return 0;
}
