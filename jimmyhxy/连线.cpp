#include <cmath>  
#include <cstdio>  
#include <cstring>  
#include <iostream>  
#include <algorithm>  
#define MAXN 10010  
#define LL long long  
using namespace std;  
int x[MAXN], y[MAXN];  
int main(void) {  
    int m, n, i;  
    double ans1, ans2, ans3, ans4, ans;  
    cin>>n>>m;
    if(n == 0)
	{  
        x[0] = 0; y[0] = 1;  
        x[1] = 0; y[1] = m;  
        x[2] = 0; y[2] = 0;  
        x[3] = 0; y[3] = m-1;  
    }
	else if(m == 0)
	{  
        x[0] = 1; y[0] = 0;  
        x[1] = n; y[1] = 0;  
        x[2] = 0; y[2] = 0;  
        x[3] = n-1; y[3] = 0;  
    }
	else
	{  
        ans1 = 2.0*sqrt((n-1.0)*(n-1.0)*1.0+m*m*1.0)+sqrt(n*n*1.0+m*m*1.0);  
        ans2 = n*1.0 + 2.0*sqrt(n*n*1.0+m*m*1.0);  
        ans3 = m*1.0 + 2.0*sqrt(n*n*1.0+m*m*1.0);  
        ans4 = 2.0*sqrt(n*n*1.0+(m-1.0)*(m-1.0)*1.0)+sqrt(n*n*1.0+m*m*1.0);  
        ans = max(ans1, ans2);  
        ans = max(ans, ans3);  
        ans = max(ans, ans4);  
        if(ans == ans3)
		{  
            x[0] = n; y[0] = m;  
            x[1] = 0; y[1] = 0;  
            x[2] = 0; y[2] = m;  
            x[3] = n; y[3] = 0;  
        }
		else if(ans == ans2)
		{  
            x[0] = n; y[0] = m;  
            x[1] = 0; y[1] = 0;  
            x[2] = n; y[2] = 0;  
            x[3] = 0; y[3] = m;  
        }
		else if(ans == ans1)
		{  
            x[0] = n-1; y[0] = 0;  
            x[1] = 0; y[1] = m;  
            x[2] = n; y[2] = 0;  
            x[3] = 1; y[3] = m;  
        }
		else if(ans == ans4)
		{  
            x[0] = 0; y[0] = 1;  
            x[1] = n; y[1] = m;  
            x[2] = 0; y[2] = 0;  
            x[3] = n; y[3] = m-1;  
        }  
    }  
    for(i=0; i<4; ++i)  
        cout<<x[i]<<" "<<y[i]<<endl;  
    return 0;  
}  
