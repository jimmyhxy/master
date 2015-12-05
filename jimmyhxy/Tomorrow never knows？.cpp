#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int md[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool rn(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0) return true;
	return false;
}

int main()
{
	int y,m,d;
	scanf("%d-%d-%d",&y,&m,&d);
	if(rn(y)) md[2]++;
	d++;
	if(d>md[m])
	{
		d=1;
		m++;
	}
	if(m>12)
	{
		m=1;
		y++;
	}
	printf("%d-%02d-%02d\n",y,m,d);
	return 0;
}
