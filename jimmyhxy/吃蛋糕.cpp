#include<iostream>
using namespace std;
char cake[10][10];
bool row[10],col[10];
int main()
{
    int r,c,sum=0;
    cin>>r>>c;
    for(int i=0;i<=r-1;i++)
    for(int j=0;j<=c-1;j++)
    {
            row[i]=true;
            col[j]=true;
            cin>>cake[i][j];
    }
    for(int i=0;i<=r-1;i++)
    for(int j=0;j<=c-1;j++)
    {
            if(cake[i][j]=='s')
            {
                row[i]=false;
                col[j]=false;
            }
    }        
    for(int i=0;i<=r-1;i++)
    for(int j=0;j<=c-1;j++)
    {
            if(cake[i][j]=='.'&&(row[i]||col[j]))
            sum++;
    }
    cout<<"¸öÊý:"<<sum<<endl;
    system("pause");
    return 0;
}
    
            
            
    
