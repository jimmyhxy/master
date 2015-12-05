#include<iostream>
using namespace std;
bool prime(int x)
{
     if(x==1)
     return false;
     for(int i=2;i*i<=x;i++)
     if(x%i==0)
     return false;
     return true;
}     
int main()
{
    int n;
    cin>>n;
    if(prime(n)) 
    cout<<"yes";
    else
    cout<<"no";
    system("pause");
    return 0;
}
