#include<iostream>
using namespace std;
int a[10][10];
int main()
{
    for(int i=0;i<=9;i++)
    {
            for(int j=0;j<=9;j++)
            {
                    a[i][j]=i*j;
                    cout<<a[i][j]<<"    ";
            }
            cout<<endl;
    } 
    system("pause");
    return 0;
}
       
