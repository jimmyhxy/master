#include<iostream>
using namespace std;
int main()
{
	int t,s,q,ans=0;
	cin>>t>>s>>q;
	q--;
	t-=s;
	while(t>0)
	{
		t=t-(s*q);
		s+=s*q;
		ans++;
	}
	cout<<ans;
	return 0;
}
