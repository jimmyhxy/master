#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int a[15],b[15];

long long power(long long x,long long i)
{
	long long p=1;
	for(int j=1;j<=i;j++)
		p*=x;
	return p;
}

int main()
{
	int n,x,m,y,i;
	long long x1=0,y1=0;
	scanf("%d%d",&n,&x);
	for(i=n;i>=1;i--)
		scanf("%d",&a[i]);
	scanf("%d%d",&m,&y);
	for(i=m;i>=1;i--)
		scanf("%d",&b[i]);
	for(i=n-1;i>=0;i--)
		x1+=a[i+1]*power((long long)x,(long long)i);
	for(i=m-1;i>=0;i--)
		y1+=b[i+1]*power((long long)y,(long long)i);
	if(x1>y1)
		printf("%c",'>');
	else
	if(x1<y1)
		printf("%c",'<');
	else
		printf("%c",'=');
	return 0;
}
