#include<iostream>
#include<algorithm>
using namespace std;
int a[10]={10,8,3,9,4,2,1,6,7,5};
int main()
{
     sort(a,a+10);
     reverse(a,a+10);
     for(int i=0;i<=9;i++)
     cout<<a[i]<<"     ";
     system("pause");
    return 0;
}
