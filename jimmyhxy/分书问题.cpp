#include<iostream>
#include<algorithm>
using namespace std;
int n;
int take[5],like[5][5]={{0,0,1,1,0},{1,1,0,0,1},{0,1,1,0,1},{0,0,0,1,0},{0,1,0,0,1}},book[5];
void give(int v)
{
	int i,k;
	for(i=0;i<5;i++)
	{
		if((like[v][i]=1)&&(book[i]==0))
		{
			take[i]=i;
			book[i]=1;
			if(v==4)
			{
				n++;
				cout<<n<<"个方案\n";
				for(int j=0;j<5;j++)
				cout<<char(j+'A')<<"拿了第"<<take[j]<<"本书"; 
				cout<<endl;
			}
			else
				give(v+1);
			book[v]=0;
		}
	}
}
int main()
{
	n=0;
	give(0);
	return 0;
}
