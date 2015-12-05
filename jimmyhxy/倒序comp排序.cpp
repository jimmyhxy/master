#include<iostream>
#include<algorithm>
using namespace std;
int a[1005],n;
bool comp(int a,int b)
{
     return a>b;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,comp);
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
    system("pause");
    return 0;
} 
