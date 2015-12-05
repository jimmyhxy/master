#include <iostream>
#include<string>
using namespace std;
string a,b;
int main()
{
    int la,lb;
    string t1,t2,t3;
    cin>>a;
    cin>>b;
    la=(int)a.length();
    lb=(int)b.length();
    if(la%2==1||lb%2==1)
    {
         if(a==b)
         {
              cout<<"YES";
              system("pause");
              return 0;
         }
         else
         {
              cout<<"NO";
              system("pause");
              return 0;
         }
    }
    else
    if(a==b)
    {
         cout<<"YES";
         system("pause");
         return 0;
    }
    else
    {
         for(int i=0;i<la;i+=2)
         {
              t1="";
              t2="";
              t1=a[i]+a[i+1];
              t2=a[i+1]+a[i];
              for(int j=0;j<lb;j+=2)
              {
                    t3=b[j]+b[j+1];
                    if(t1!=t3||t2!=t3)
                    {
                         cout<<"NO";
                         system("pause");
                         return 0;
                    }
                    else
                    break;
              }
         }
    }
    cout<<"YES";
    system("pause");
    return 0;
}
              
