#include <iostream>
#include<algorithm>
using namespace std;
int boa,bob,pt1a,pt1b,pt2a,pt2b,ababa;
int main()
{
    int sum[4],kuan[4];
    cin>>boa>>bob;
    cin>>pt1a>>pt1b;
    cin>>pt2a>>pt2b;
    sum[0]=pt1a+pt2a;
    sum[1]=pt1a+pt2b;
    sum[2]=pt1b+pt2a;
    sum[3]=pt1b+pt2b;
    kuan[0]=max(pt1b,pt2b);
    kuan[1]=max(pt1b,pt2a);
    kuan[2]=max(pt1a,pt2b);
    kuan[3]=max(pt1a,pt2a);
    for(int i=0;i<4;i++)
    {
         if(sum[i]<=boa&&kuan[i]<=bob||
         sum[i]<=bob&&kuan[i]<=boa)
         {
               cout<<"YES";
               return 0;
         }
    }
    cout<<"NO";
    return 0;
}
