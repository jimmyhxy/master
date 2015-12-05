#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,t;
	bool ab=false,ba=false;
	int l;
	cin>>s;
	l=(int)s.length();
	for(int i=0;i<l;i++)
	{
		t=s.substr(i,2);
		if(t=="AB")
		{
			ab=true;
			s[i]='.';
			s[i+1]='.';
		}
		if(t=="BA")
		{
			ba=true;
			s[i]='.';
			s[i+1]='.';
		}
		if(ab&&ba)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
