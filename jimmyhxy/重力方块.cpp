#include<iostream>
#include<algorithm>
using namespace std;
int a[100],n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<"     ";
    cout<<endl;
    system("pause");
    return 0;
}
