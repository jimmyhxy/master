#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int let[33];
string s;

int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		getline(cin,s);
		for(j=0;j<s.size();j++)
		{
			if(s[j]>='A'&&s[j]<='Z')
				let[s[j]-64]++;
		}
	}
	int maxn=let[1];
	for(i=2;i<=26;i++)
		if(let[i]>maxn) maxn=let[i];
	for(i=maxn;i>=1;i--)
	{
		for(j=1;j<=26;j++)
		{
			if(let[j]==i)
			{
				cout<<"* ";
				let[j]--;
			}
			else
			{
					
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	for(i=1;i<=26;i++)
		cout<<(char)(i+64)<<' ';
	return 0;
}
