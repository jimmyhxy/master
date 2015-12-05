#include<iostream>
#include<algorithm>
using namespace std;
int num[1005];
int main()
{
	int n,sum=0;
	bool zero=false;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		sum=sum+num[i];
		if(!num[i]) zero=true;
	}
	sort(num,num+n);
    reverse(num,num+n);
	if(sum%9!=0&&zero)
	cout<<0;
	else if(sum%9!=0&&!zero)
	cout<<-1;
	else
	{
		for(int i=0;i<n;i++)
			cout<<num[i];
	}
	return 0;
}
