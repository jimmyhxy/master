#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,d,sum;
    sum=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=n;i++)
    if(i%k&&i%l&&i%m&&i%n)
    sum++;
    cout<<(d-sum)<<"\n";
    system("pause");
    return 0;
}
