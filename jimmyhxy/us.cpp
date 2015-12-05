#include<iostream>
#include<string>
using namespace std;
int main()
{
	int l;
	string s;
	cin>>s;
	l=s.length();
	l=l/2;
	for(int i=0;i<l;i++)
	{
		cout<<s[i];
	}
	
}
