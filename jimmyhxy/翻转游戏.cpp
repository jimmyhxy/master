#include<iostream>
using namespace std;
int shu[105];
int main()
{
    int sum=0,n,v,mx=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
          int v;
          cin>>v;
          sum+=v;
          shu[i]=shu[i-1]+(v==0 ? 1 : -1);
    }
    for(int i=1;i<=n;i++)
    for(int j=i;j<=n;j++)
    mx=max(shu[j]-shu[i-1],mx); 
    sum+=mx;
    cout<<sum<<endl;
    system("pause");
    return 0;
}
