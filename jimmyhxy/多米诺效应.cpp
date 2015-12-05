#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=0,left,right;
    for(int i=0;i<n;++i)
    {
            if(s[i]=='.')
            {
                  left=-1e9;
                  right=-1e9;
                  for(int j=i-1;j>=0;--j)
                  if(s[j]!='.')
                  {
                      if(s[j]=='R')
                      left=j;
                      break;
                  }
                  for(int j=i+1;j<n;++j)
                  if(s[j]!='.')
                  {
                      if(s[j]=='L')
                      right=j;
                      break;
                  }
                  if(left==right||i-left==right-i)
                  ++res;
            }
    }
    cout<<res;
    system("pause");
    return 0;
}   
      
