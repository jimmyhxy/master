#include<iostream>
using namespace std;
int main()
{
    long long l,k;
    int cnt=-1;
    cin>>k;
    cin>>l;
    while(!(l%k)||l==0)
    {
         l/=k; 
         cnt++;
    }
    if(l==1&&cnt!=-1)
    cout<<"YES"<<endl<<cnt;
    else
    cout<<"NO";
    return 0;
}
