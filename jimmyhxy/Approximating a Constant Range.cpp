#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
using namespace std;
multiset<int> m;

int main()
{
	int n;
	cin>>n;
	int r=0;
	int ans=0;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		while(r<n)
		{
			m.insert(a[r]);
			if((*--m.end())-(*m.begin())>1)
			{
				m.erase(m.find(a[r]));
				break;
			}
			r++;
		}
		ans=max(ans,r-i);
		m.erase(m.find(a[i]));
	}
	cout<<ans<<endl;
	return 0;
}
