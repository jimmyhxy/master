#include<iostream>
#include<set>
using namespace std;
char name[1000];
int main()
{
    cin>>name;
    int i=0,lenth;
    set<char> letter;
    while(name[i]!='\0')
    {
        letter.insert(name[i]);
        i++;
    }
    lenth=(int)letter.size();
    if(lenth%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!";
    system("pause");
    return 0;
}
