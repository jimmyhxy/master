#include<iostream>
using namespace std;
int main()
{
    char letter;
    int ascii;
    cout<<"����һ����ĸ";
    cin>>letter;
    if(letter>='A'&&letter<='Z')
    {
         ascii=letter;
         ascii+=32;
         letter=ascii;
         cout<<"Сд��ĸ��";
         cout<<letter;
    }
    else if(letter>='a'&&letter<='z')
    {
         ascii=letter;
         ascii-=32;
         letter=ascii;
         cout<<"��д��ĸ��";
         cout<<letter;
    }
         
    else
    cout<<"������ĸ"; 
    system("pause");
    return 0;
}
