#include<iostream>
using namespace std;
bool sqr[100000100];
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n*n;i++)
    sqr[i*i]=false;
    for(int i=1;i<=n;i++)
    sqr[i*i]=true;
    for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++)
    if(sqr[i*i+j*j]) sum++;
    cout<<sum;
    system("pause");
    return 0;
}   
