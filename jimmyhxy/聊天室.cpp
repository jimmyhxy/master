#include<iostream>
#include<string>
using namespace std;
int main()
{
    string com;
    int num=0,cnt=0;
    while(getline(cin,com))
    {
         if(com[0]=='+')num++;
         else if(com[0]=='-')num--;
         else
         {
              cnt+=num*com.substr(com.find(':')+1).size();
         }
    }
    cout<<cnt<<endl;
    system("pause");
    return 0;
}
