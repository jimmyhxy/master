#include<iostream>
#include<string>
using namespace std; 
string s;
int main()
{
	int n,zero=0,one=0;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		zero++;
		else
		one++;
	}
	if(zero>one)
	cout<<(zero-one);
	else
	cout<<(one-zero);
}
