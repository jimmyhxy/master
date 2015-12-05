#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m,i,t;
    scanf("%d",&n);
    m=100000+n;
    t=1;
    for(i=100000;i<m;i++)
	{
        if(t!=n)
		{
            printf("%d ",i);
            t++;
        }
        else printf("%d\n",i);
    }
    return 0;
}
