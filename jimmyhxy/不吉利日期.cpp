#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int w,i;
	cin>>w;
	w=(w+12)%7;
	if(w==0) w=7;
	if(w==5) cout<<1<<endl;
	for(i=2;i<=12;i++)
	{
		w=(w+month[i-1])%7;
		if(w==0) w=7;
		if(w==5) cout<<i<<endl;
	}
	return 0;
} 
