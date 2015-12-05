#include<iostream>
using namespace std;
struct actlist
{
	char actname[20];
	char director[20];
	int mtime;
	actlist * next;
};
