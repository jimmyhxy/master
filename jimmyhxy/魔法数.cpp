#include<iostream>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=0;i=0;i=0)
    {
            if(n%10==1)
            n=n/10;
            else if(n%100==14)
            n=n/100;
            else if(n%1000==144)
            n=n/1000;
            else break;
    }
    if(n==0)
    cout<<"yes\n";
    else
    cout<<"no\n";
    system("pause");
    return 0;
}            
