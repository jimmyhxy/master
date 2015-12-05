#include<iostream>
using namespace std;
int main()
{
	//strckm 
	int n,zero=0,five=0,t;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		if(t==5)
		five++;
		else
		zero++;
	}
	five/=9;
	five*=9;
	if(five!=0&&zero!=0)
	{
		for(int i=1;i<=five;i++)
		cout<<'5';
		for(int i=1;i<=zero;i++)
		cout<<'0';
	}
	else
	if(zero!=0)
	cout<<0;
	else
	cout<<-1;
	return 0;
}
