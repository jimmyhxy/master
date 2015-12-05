#include<cstdio>
#include<set>
#include<cstring>
using namespace std;

int t,n;
char str[11];

struct hash
{
	
}

struct Set
{
	
}



int main()
{
	int n,t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
		{
			scanf("%s",str);
			if(str=="PUSH") push();
			if(str=="DUP") dup();
			if(str=="ADD") add();
			if(str=="INTERSECT") intersect();
			if(str=="UNION") Union();
		}
		puts("***");
	}
}
