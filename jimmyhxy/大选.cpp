#include<iostream>
using namespace std;
int n,m;
int candidate[102];
int main()
{
    cin>>n>>m;
    int a;
    for (int i=0;i<m;i++)
	{
        int vote=-1;
        int win=0;
        for(int j=0;j<n;j++)
		{
            cin>>a;
            if (vote<a)
			{
                vote=a;
                win=j;
            }
        }
        candidate[win]++;
    }
    int vote=-1;
    int win=0;
    for (int i=0;i<n;i++)
	{
        if (vote<candidate[i])
		{
            vote=candidate[i];
            win=i;
        }
    }
    cout<<(win+1);
    return 0;
}
