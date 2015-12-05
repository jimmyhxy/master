#include<iostream>
#include<string>
using namespace std;
string s,z;
bool t;
void f()
{
     if(cin>>s)
     {
          z+=s;
          if(s=="pair")
          z+="<",f(),z+=",",f(),z+=">";
     }
     else
     t=true;
}
int main()
{
    cin>>s;
    f();
    if(t||cin>>s)
    cout<<"Error occurred";
    else
    cout<<z;
    system("pause");
    return 0;
}
