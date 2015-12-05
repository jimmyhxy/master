#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct pat
{
	string num;
	int age;
	int xu;
};

bool cmp(pat a,pat b)
{
	if(a.age>=60 && b.age<60) return true;
	if(a.age>=60 && b.age>=60 && a.age>b.age) return true;
	if(a.age>=60 && a.age==b.age && a.xu<b.xu) return true;
	if(a.age<=60 && b.age<=60 && a.xu<b.xu) return true;
	return false;
}

pat p[111];

int main()
{
	int i,n,s;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>p[i].num>>p[i].age;
		p[i].xu=i;
	}
	sort(p+1,p+1+n,cmp);
	for(i=1;i<=n;i++)
		cout<<p[i].num<<endl;
	cout<<endl;
	return 0;
}
