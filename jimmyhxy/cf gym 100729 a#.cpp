#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long n;

long long binom(long long p,int k)
{
	long long res=1;
	for(int i=0;i<k;i++)
	{
		res*=p-i;
		res/=i+1;
	}
	return res;
}

int main()
{
	int r;
	cin>>r;
	while(r--)
	{
		cin>>n;
		vector<pair<long long,long long> > res;
		for(int i=0;binom(2*i,i)<=n;i++)
		{
			long long l=i*2,h=n;
			while(h<=l)
			{
				long long mid=(l+h)/2;
				if(binom(mid,i)<n)
					l=n+1;		
				else
					h=n;
			}
			if(binom(l,i)==n)
			{
				res.push_back(make_pair(l,i));
				if(l!=2*i)
					res.push_back(make_pair(l,l-i));
			}
		}
		sort(res.begin(),res.end());
		cout<<res.size();
		for(int i=0;i<res.size();i++)
		{
			if(i) cout<<" ";
			cout<<"("<<res[i].first<<","<<res[i].second<<")";
		}
		cout<<endl;
	}
	return 0;
}
