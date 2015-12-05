#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,one=0,zero=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    if(s[i]=='0')
    zero++;
    else
    one++;
    cout<<max(zero,one)-min(zero,one);
    return 0;
}
    
