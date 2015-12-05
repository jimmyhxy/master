#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

bool stu[111];

int main()
{
	int ans=0;
	for(int i=1;i<=100;i++)
	{
		for(int j=1;i*j<=100;j++)
			stu[i*j]=!stu[i*j];
	}
	for(int i=1;i<=100;i++)
		if(stu[i])
		{
			printf("S%d ",i);
			ans++;
		}
	printf("\n%d\n",ans);
	return 0;
}
