
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char s[123];
pair<string,string> email[23333];
string t;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		email[i].first=email[i].second=s;
		for(j=0;j<email[i].first.size();j++)
		{
			if(email[i].first[j]>='A' && email[i].first[j]<='Z') email[i].first[j]+=32;
		}
		if(email[i].first.size()>10 && email[i].first.substr(email[i].first.size()-10,email[i].first.size())=="@bmail.com")
		{
			t=email[i].first;
			email[i].first="";
			for(j=0;j<t.size();j++)
			{
				if(t[j]=='@' || t[j]=='+') break;
				if(t[j]=='.') continue;
				email[i].first+=t[j];
			}
			while(t[j]!='@') j++;
			while(j<t.size()) email[i].first+=t[j++];
		}
	}
	sort(email,email+n);
	j=1;
	for(i=1;i<n;i++)
		if(email[i].first!=email[i-1].first) j++;
	cout<<j<<endl;
	for(i=j=0;i<n;)
	{
		while(email[j].first==email[i].first) j++;
		cout<<j-i;
		while(i<j) cout<<' '<<email[i++].second<<endl;
	} 
}
