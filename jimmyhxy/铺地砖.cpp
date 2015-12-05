#include<iostream>
using namespace std;
int main()
{
    long long chang,kuan,bian;
    cin>>chang>>kuan>>bian;
    cout<<((chang+bian-1)/bian)*((kuan+bian-1)/bian);
    system("pause");
    return 0;
}
