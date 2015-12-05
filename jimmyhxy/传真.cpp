#include<iostream>
#include<algorithm>
using namespace std;
bool ok(string s)
{
	int sz=s.size();
	for (int i=0; i<sz/2; i++)
		if(s[i]!=s[sz-1-i]) return false;
	return true;
}
int main()
{
	string s; cin>>s;
	int k; cin>>k;
	int sz=s.size();
	if(sz%k)
	{
		cout << "NO" << endl;
		return 0;
	}
	int n=sz/k;
	for (int i=0; i<k; i++)
	{
		string cur=s.substr(i*n,n);
		if(!ok(cur))
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
