#include<iostream>
using namespace std;
bool islucky(int x)
{
     if(x==0)
     return false;
     while (x>0)
     {
           if(x%10!=4 and x%10!=7)
           return false;
           x/=10;
     }
     return true;
}      
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         if(islucky(i) and n%i==0)
         {
              cout<<"YES"<<endl;
              system("pause");
              return 0;
         }
    }     
    cout<<"NO"<<endl;
    system("pause");
    return 0;
}
