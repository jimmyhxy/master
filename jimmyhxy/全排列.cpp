#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    do
    {
        for(int i=0;i<5;i++)
        cout<<a[i]<<"  ";
        cout<<endl;
    }
    while(next_permutation(a,a+5));
    system("pause");
    return 0;
}
   
