#include <iostream>
using namespace std; 
char s[20],t[20];
int len;
bool pal()
{
     for(int i=0;i<=len;i++)
     if(t[i]!=t[len-i]) return 0;
     return 1;
}
int main()
{
    cin>>s;
    len=(int)strlen(s);
    for(int i=0;i<=len;i++)
    {
          for(int j=0;j<i;j++)
          t[j]=s[j];
          for(int j=i+1;j<=len;j++)
          t[j]=s[j-1];
          for(int j='a';j<='z';j++)
          {
               t[i]=j;
               if(pal())
               {
                    cout<<t;
                    system("pause");
                    return 0;
               }
          }
    }
    cout<<"NA";
    system("pause");
    return 0;
}
