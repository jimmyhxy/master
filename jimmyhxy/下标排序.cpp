#include<iostream>
#include<algorithm>
using namespace std;
int a[1005],b[1005],n;
bool comp(int x,int y)
{
     return a[x]<a[y];
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         b[i]=i; 
    }
         sort(b,b+n,comp);
    for(int i=0;i<n;i++)
    cout<<(b[i]+1)<<"  ";
    system("pause");
    return 0;
} 
