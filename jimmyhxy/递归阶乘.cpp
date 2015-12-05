#include<iostream>
using namespace std;
int f(int x)
{
    if(x==1||x==0)
    return 1;
    else
    return x*f(x-1);
} 
int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    system("pause");
    return 0;
} 
