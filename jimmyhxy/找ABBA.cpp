#include <iostream>
#include<string>
using namespace std;
string s,t1,t2;
int main()
{
	cin>>s;
	int l;
	l=(int)s.length();
	if(s.find("AB")==-1||s.find("BA")==-1)
	{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<l-1;i++)
	{
		t1=s.substr(i,2);
		if(t1=="AB"&&(s.find("BA",i+2)+1))
		{
			cout<<"YES";
			return 0;
		}
		else if(t1=="BA"&&(s.find("AB",i+2)+1))
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
