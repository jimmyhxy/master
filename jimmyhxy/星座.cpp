#include<iostream>
#include<string>
using namespace std;
string f[500];
int main()
{
    int n,m,k,x,i,j;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    cin>>f[i];
    for(int x=1;x<n;x++)
    {
            for(int i=x;i<n-x;i++)
            {
                    for(int j=x;j<m-x;j++)
                    {
                            if(f[i][j]=='*'&&f[i+x][j]=='*'&&f[i-x][j]=='*'
                            &&f[i][j+x]=='*'&&f[i][j-x]=='*'&&!--k)
                            {
                                    cout<<i+1<<"    "<<j+1<<endl
                                    <<i-x+1<<"    "<<j+1<<endl
                                    <<i+x+1<<"    "<<j+1<<endl
                                    <<i+1<<"    "<<j-x+1<<endl
                                    <<i+1<<"    "<<j+x+1<<endl;
                                    system("pause");
                                    return 0;
                            }
                    }
            }
    }
    cout<<"-1";
    system("pause");
    return 0;
}
