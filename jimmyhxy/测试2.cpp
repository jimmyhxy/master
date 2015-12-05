#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	a=0.66666;
	cout<<setiosflags(ios::fixed)<<setprecision(16)<<a<<endl;
	return 0;
}
