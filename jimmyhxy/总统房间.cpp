#include<iostream>
#include<set>
using namespace std;
char room[100][100];
int main()
{
    char p;
    int n,m;
    cin>>n>>m>>p;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>room[i][j];
    set<char> s;
    s.insert(p);
    s.insert('.');
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    if(room[i][j]==p)
    {
        if(i!=0) s.insert(room[i-1][j]);
        if(i!=n-1) s.insert(room[i+1][j]);
        if(j!=0) s.insert(room[i][j-1]);
        if(j!=0) s.insert(room[i][j+1]);
    }
    cout<<(int)s.size()-2;
    system("pause");
    return 0;
}    
