#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num,len;
    string word;
    cin>>num;
    while(num--)
    {
         cin>>word;
         len=word.length();
         if(len>10)
         cout<<word[0]<<len-2<<word[len-1]<<endl;
         else
         cout<<word<<endl;
    }
    system("pause");
    return 0;
}       
