#include<iostream>
using namespace std;
int main()
{
    int a[200],sum=0;
    bool prime;
    for(int i=2;i<=1000;i++)
    {
            prime=true;
            for(int j=2;j*j<=i;j++)
            if(i%j==0)
            {
                     prime=false;
                     break;
            }
            if(prime)
            {
                      a[sum]=i;
                      sum=sum+1;
            }
    }
    for(int i=0;i<=sum-1;i++)
    cout<<a[i]<<"  ";
    system("pause");
    return 0;
}
