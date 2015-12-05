#include<iostream>
using namespace std;
int i,n,m,k,r,j,b[1010]; 
bool a[1010];
int main()
{
    cin>>n>>k;
    for(i=2;i<=n;i++)
    if(!a[i])
    {
         b[m++]=i;
         for(j=i*2;j<=n;j+=i)
         a[j]=true;
    }
    for(i=0;i<m;i++)
    {
         for(j=0;j<i;j++)
         if(b[i]-1-b[j]==b[j+1])
         {
                r++;
                break;
         }
    }
    if(r>=k)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
