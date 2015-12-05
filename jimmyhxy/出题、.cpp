#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int n,l,r,x,ans=0;
    int c[20],i,j;
    cin>>n>>l>>r>>x;
    for(i=0;i<n;i++)
    cin>>c[i];
    sort(c,c+n);
    for(i=1;i<(i<<n);i++)
    {
         int sum=0,mn=50000000,mx=0;
         for(j=0;j<n;j++)
         {
              if(i&(1<<j))
              {
                    sum+=c[j];
                    if(c[j]>mx) mx=c[j];
                    if(c[j]<mn) mn=c[j];
              }
         }
         if(sum>=l&&sum<=r&&mx-mn>=x) ans++;
    }
    cout<<ans;
    system("pause");
    return 0;
}     
