#include<iostream>
using namespace std;
int main()
{
    int year;
    cout <<"Äê·İ"; 
    cin >>year;
    if(year%4==0&&year%100!=0||year%400==0)
    cout <<"yes";
    else
    cout <<"no";
    system("pause");
    return 0;
}
