#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    cin>>a[i];
    sort(a,a+4);
    if(a[0]+a[1]>a[2]||a[1]+a[2]>a[3])
    cout<<"TRIANGLE\n";
    else if(a[0]+a[1]==a[2]||a[1]+a[2]==a[3])
    cout<<"SEGMENT\n";
    else
    cout<<"IMPOSSIBLE\n";
    system("pause");
    return 0;
}
