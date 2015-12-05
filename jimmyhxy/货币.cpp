#include <iostream>
#include<algorithm>
using namespace std;
int note[1010];
int main()
{
    int n;
    long long cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         cin>>note[i];
         cnt+=note[i];
    }
    sort(note,note+n);
    if(note[0]==1)
    cout<<-1;
    else
    cout<<1;
    return 0;
}
