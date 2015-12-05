#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	if(s1.find(s2)!=-1)
	{
		cout<<s2<<" is substring of "<<s1<<endl;
		return 0;
	}
	if(s2.find(s1)!=-1)
	{
		cout<<s1<<" is substring of "<<s2<<endl;
		return 0;
	}
	cout<<"No substring"<<endl;
}
