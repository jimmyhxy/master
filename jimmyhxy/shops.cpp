#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int d1,d2,d3;
	cin>>d1>>d2>>d3;
	if((d1+d2)*2>=d3+d2+d1&&(d3+d2)*2>=d3+d2+d1&&(d1+d3)*2>=d3+d2+d1)
	{
		cout<<d1+d2+d3;
		return 0;
	}
	else
	{
		if((d1+d2)*2<(d3+d2)*2&&(d1+d2)*2<(d1+d3)*2)
		{
			cout<<(d1+d2)*2;
			return 0;
		}
		if((d1+d3)*2<(d1+d2)*2&&(d1+d3)*2<(d2+d3)*2)
		{
			cout<<(d1+d3)*2;
			return 0;
		}
		if((d3+d2)*2<(d3+d1)*2&&(d3+d2)*2<(d1+d2)*2)
		{
			cout<<(d3+d2)*2;
			return 0;
		}
	}
}
