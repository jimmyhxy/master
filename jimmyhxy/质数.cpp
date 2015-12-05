#include<iostream>
using namespace std;
int main()
{
    int n;
    bool prime=true;
    cout<<"输入一个数"; 
    cin>>n;
    for(int i=2;i*i<=n;i++)
    if(n%i==0)
    {
              prime=false;
              break;
    }
    if(prime&&n>1)
    cout<<"是质数"<<"       ";
    else
    cout<<"不是质数"<<"      ";
    system("pause");
    return 0;
}
