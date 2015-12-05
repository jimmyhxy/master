#include<iostream>
#include<algorithm>
using namespace std; 
char s[20];
int main()
{
    int num[20],n,x,ans=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    cin>>num[i];
    for(int i=1;i<=n;i++)
    {
          for(int j=0;j<i;j++)
          s[j]=1;
          do
          {
                 int sum=0;
                 for(int j=0;j<=n;j++)
                 if(s[j]==1)
                 sum+=num[j];
                 if(sum==x)
                 {
                      cout<<"yes";
                      for(int j=0;j<=n;j++)
                      if(s[j]==1) cout<<num[j]<<"    ";
                 }
                 cout<<endl;
                 system("pause");
                 return 0;         
          }
          while(next_permutation(s,s+n));
          for(int j=0;j<=n;j++)
          s[j]=0;
    }
    cout<<"no\n";
    system("pause");
    return 0;
}
