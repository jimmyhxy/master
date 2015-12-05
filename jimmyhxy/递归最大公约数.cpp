#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    return (!b) ? a : gcd(b,a%b);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m)<<endl;
    system("pause");
    return 0;
} 
