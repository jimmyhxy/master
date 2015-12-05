#include<iostream>
using namespace std;
int length[110],n,t,sum; 
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            cin>>t;
            length[t]++;
    }
    for(int i=1;i<=n;i++)
    {
            length[i]=length[i]/2;
            sum=sum+length[i];
    }
    cout<<sum/2;
    system("pause");
    return 0;
}        
           
    
    
