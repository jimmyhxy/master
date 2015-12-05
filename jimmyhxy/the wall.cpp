#include<iostream>
using namespace std;
int main()
{
	int x,y,a,b,tx,ty,r,ans=0,lcd;
	cin>>x>>y>>a>>b;
	tx=x;
	ty=y;
	while(tx%ty!=0)
	{
		r=tx%ty;
		tx=ty;
		ty=r;
	}
	lcd=x*y/ty;
	ans=(b/lcd)-((a%lcd==0)?a/lcd:a/lcd+1)+1;
	cout<<ans;
	return 0;
}
