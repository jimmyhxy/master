#include<iostream>
using namespace std;
int main()
{
    int n;
    bool prime=true;
    cout<<"����һ����"; 
    cin>>n;
    for(int i=2;i*i<=n;i++)
    if(n%i==0)
    {
              prime=false;
              break;
    }
    if(prime&&n>1)
    cout<<"������"<<"       ";
    else
    cout<<"��������"<<"      ";
    system("pause");
    return 0;
}
