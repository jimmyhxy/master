#include<iostream>
#include<cstdlib>
#include<ctime>
#define MINE 10
using namespace std;
bool mine[10][10];//储存雷的状况
int minenumber[10][10];//储存周围雷数
int state[10][10];//标记是否显示过 1为显示过 0为未显示过
int counter,num;bool GAMEOVER=false;
void openwhites(int ,int );
void laymine()//布雷函数
{
	counter=0;int m=0;
	srand((unsigned)time(NULL));
	for(int i=0;i<11;i++)
	{
		for(int j=0;j<11;j++)
		
				cout<<"■?";
		
		cout<<endl;
	}
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
		{
			mine[i][j]=false;
			state[i][j]=0;
			minenumber[i][j]=0;
		}
		do
		{
			int x=rand()%10;int y=rand()%10;
			if(mine[x][y]==false)
			{
				mine[x][y]=true;counter++;
				if(counter==MINE)
					break;
			}
		}
		while(counter<MINE);
}


void statistics()//统计周围雷数
{
	num=0;
	//中心的雷数
	for(int i=1;i<9;i++)
		for(int j=1;j<9;j++)
		{
			if(mine[i][j]==false)
			{
				for(int m=i-1;m<=i+1;m++)
					for(int n=j-1;n<=j+1;n++)
					{
						if(mine[m][n]==true)
							num++;
					}
			}

			minenumber[i][j]=num;
			num=0;
		}


		//上边的雷数
		for(int j=1;j<9;j++)

		{
			if(mine[0][j]==false)
			{
				for(int m=0;m<2;m++)
					for(int n=j-1;n<=j+1;n++)
					{
						if(mine[m][n]==true)
							num++;
					}


			}
			minenumber[0][j]=num;
			num=0;

		}

		//下边的雷数
		for(int j=1;j<9;j++)
		{
			if(mine[9][j]==false)
			{
				for(int m=8;m<10;m++)
					for(int n=j-1;n<=j+1;n++)
					{
						if(mine[m][n]==true)
							num++;
					}


			}
			minenumber[9][j]=num;
			num=0;
		}


		//左边的雷数

		for(int i=1;i<9;i++)
		{
			if(mine[i][0]==false)
			{
				for(int m=i-1;m<=i+1;m++)
					for(int n=0;n<2;n++)
					{
						if(mine[m][n]==true)
							num++;
					}


			}
			minenumber[i][0]=num;
			num=0;
		}

		//右边的雷数


		for(int i=1;i<9;i++)
			if(mine[i][9]==false)
			{
				for(int m=i-1;m<=i+1;m++)
					for(int n=8;n<10;n++)
					{
						if(mine[m][n]==true)
							num++;
					}

					minenumber[i][9]=num;
					num=0;
			}


			//顶点雷数
			if(mine[0][0]==false)
				minenumber[0][0]=mine[0][1]+mine[1][1]+mine[1][0];
			if(mine[0][9]==false)
				minenumber[0][9]=mine[0][8]+mine[1][8]+mine[1][9];
			if(mine[9][0]==false)
				minenumber[9][0]=mine[8][8]+mine[9][1]+mine[8][0];
			if(mine[9][9]==false)
				minenumber[9][9]=mine[9][8]+mine[8][8]+mine[8][9];
			

}

void cls()//显示函数
{

	int x,y;
	cout<<"请输入想要点击的横坐标x:";cin>>x;cout<<"请输入想要点击的纵坐标y:";cin>>y;
	system("cls");
	if(mine[x-1][y-1]==true)
	{
		for(int i=0;i<10;i++)
			for(int j=0;j<10;j++)
			{
				if(mine[i][j]==true)
					{
						state[i][j]=1;
						minenumber[i][j]=9;
				}
			}
		cout<<"You have touch the mine. GAMEOVER"<<endl;
		GAMEOVER=true;
		//return ;
	}
	openwhites(x-1,y-1);   
	//state[x][y]=1;
	//system("cls");
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(state[i][j]==1)
			{
				if(minenumber[i][j]==0)
					cout<<"□";
				else if(minenumber[i][j]==1)
					cout<<"①";
				else if(minenumber[i][j]==2)
					cout<<"②";
				else if(minenumber[i][j]==3)
					cout<<"③";
				else if(minenumber[i][j]==4)
					cout<<"④";
				else if(minenumber[i][j]==5)
					cout<<"⑤";
				else if(minenumber[i][j]==6)
					cout<<"⑥";
				else if(minenumber[i][j]==7)
					cout<<"⑦";
				else if(minenumber[i][j]==8)
					cout<<"⑧";
				else
					cout<<"¤";
			}
			else
				cout<<"■";
		}
		cout<<endl;
	}
	int count=0;
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			{
				if(mine[i][j]==false&&state[i][j]==1)
					count++;
		}
		if(count==90)
			{
				cout<<"You win"<<endl;
			GAMEOVER=true;
		}
}

void openwhites(int i,int j)//自动展开空白函数
{
	if(state[i][j]==0&&mine[i][j]==false)

	{
		if (i<0||i>9||j<0||j>9)//越界
			return;
		if(minenumber[i][j]>0)
		{
			state[i][j]=1;
			return;
		}
		else
		{
			state[i][j]=1;
			openwhites(i-1,j-1);
			openwhites(i-1,j);
			openwhites(i-1,j+1);
			openwhites(i+1,j-1);
			openwhites(i+1,j);
			openwhites(i+1,j+1);
			openwhites(i,j+1);
			openwhites(i,j-1);
		}
	}
}
int main()
{

	laymine();
	statistics();
	do
	{
		cls();
	}
	while(GAMEOVER==false);
}

