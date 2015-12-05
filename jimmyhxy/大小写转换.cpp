#include<iostream>
using namespace std;
int main()
{
    char letter;
    int ascii;
    cout<<"输入一个字母";
    cin>>letter;
    if(letter>='A'&&letter<='Z')
    {
         ascii=letter;
         ascii+=32;
         letter=ascii;
         cout<<"小写字母是";
         cout<<letter;
    }
    else if(letter>='a'&&letter<='z')
    {
         ascii=letter;
         ascii-=32;
         letter=ascii;
         cout<<"大写字母是";
         cout<<letter;
    }
         
    else
    cout<<"不是字母"; 
    system("pause");
    return 0;
}
