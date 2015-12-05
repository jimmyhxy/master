#include<iostream>
using namespace std;
int co,cx;
bool wo,wx;
char b[10];
bool check(int i,char c)
{
     return (b[3*i]==c&&b[3*i+1]==c&&b[3*i+2]==c
     ||b[i]==c&&b[i+3]==c&&b[i+6]==c
     ||b[0]==c&&b[4]==c&&b[8]==c
     ||b[2]==c&&b[4]==c&&b[6]==c); 
}     
int main()
{
    for(int i=0;i<9;i++)
    {
        cin>>b[i];
        if(b[i]=='0')
        co++;
        else if(b[i]=='x')
        cx++;
    }
    wx=wo=false;
    for(int i=0;i<3;i++)
    {
            wo=wo||check(i,'0');
            wx=wx||check(i,'x');
    }
    if((wx&&cx!=co+1)
    ||(wo&&cx!=co)
    ||(cx!=co+1&&cx!=co))
    cout<<"illegal"<<endl;
    else if (wx)
    cout<<"the first player won"<<endl;
    else if (wo)
    cout<<"the second player won"<<endl;
    else if (cx+co==9)
    cout<<"draw"<<endl;
    else if(cx==co)
    cout<<"first"<<endl;
    else
    cout<<"second"<<endl;
    system("pause");
    return 0;
}
