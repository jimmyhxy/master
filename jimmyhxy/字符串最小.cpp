#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string fj(string s)
{
       string a,b;
       int len;
       len=(int)s.length();
       if(len&1) return s;
       a=s.substr(0,len/2);
       b=s.substr(len/2+1);
       a=fj(a);
       b=fj(b);
       if(a>b) swap(a,b);
       return a+b;
}      
int main()
{
    string n;
    cin>>n;
    cout<<fj(n);
    return 0;
}
