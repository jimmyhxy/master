#include<vector>
#include<iostream>
using namespace std;
vector <int> v;
int x;
int main()
{
	for(int i=1;i<11;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<v.size();
	return 0;
}
