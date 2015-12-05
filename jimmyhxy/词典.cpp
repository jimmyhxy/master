#include <iostream>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;
map<string, string> m;

int main()
{
	m.clear();
	char ch[30];
	char a[15],b[15];
	while(gets(ch)&&ch[0]!='\0')
	{
		sscanf(ch,"%s%s",a,b);
		m[b]=a;
	}
	while(gets(ch)&&ch[0]!='\0')
	{
		if(m.find(ch)==m.end())
			cout<<"eh"<<endl;
		else
			cout<<m[ch]<<endl;
	}
	return 0;
}
