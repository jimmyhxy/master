#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int n;
string names[50];
int wp[50],dg[50],sg[50];
bool comp(int a,int b)
{
     if(wp[a]!=wp[b]) return wp[a]>wp[b];
     else if(dg[a]!=dg[b]) return dg[a]>dg[b];
     else return sg[a]>sg[b];
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>names[i];
    for(int i=0;i<n;i++)
    wp[i]=dg[i]=sg[i]=0;
    for(int i=0;i<n*(n-1)/2;i++)
    {
         string tmp,a,b;
         int p,q;
         char ch;
         cin>>tmp>>p>>ch>>q;
         a=tmp.substr(0,tmp.find('-'));
         b=tmp.substr(tmp.find('-')+1);
         int ai,bi;
         ai=find(names,names+n,a)-names;
         bi=find(names,names+n,b)-names;
         if(p>q)wp[ai]+=3;
         else if(p<q)wp[bi]+=3;
         else
         {
             wp[ai]++;
            kmi 9 wp[bi]++;
         }
         sg[ai]+=p;
         sg[bi]+=q;
         dg[ai]+=p-q;
         dg[bi]+=q-p;
    }
    int a[50];
    for(int i=0;i<n;i++)
    a[i]=i;
    sort(a,a+n,comp);
    string s[50];
    for(int i=0;i<n/2;i++)
    s[i]=names[a[i]];
    sort(s,s+n/2);
    for(int i=0;i<n/2;i++)
    cout<<s[i];
    return 0;            
}
