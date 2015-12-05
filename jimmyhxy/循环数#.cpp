#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int per[66][66];

int main()
{
	int i,si,q=0;
	string s;
	getline(cin,s);
	si=s.size();
	for(i=0;i<si;i++)
	{
		per[i+1][i+1]=s[(i+q)%si]-48;
	}
}
