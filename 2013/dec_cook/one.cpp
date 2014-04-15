#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<set>
#include<string>
#include<numeric>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char t1[6];
		char t2[6];
		float dist;
		cin>>t1>>t2>>dist;
		float time1=(t1[0]-'0')*600+(t1[1]-'0')*60+(t1[3]-'0')*10+(t1[4]-'0');
		float time2=(t2[0]-'0')*600+(t2[1]-'0')*60+(t2[3]-'0')*10+(t2[4]-'0');
		float appr1=time1-time2+dist;
		float appr2;
		if(time1-time2>=2*dist)
		{
			appr2=time1-time2;
		}
		else
		{
			appr2=time1-time2+(2*dist-(time1-time2))/2;
		}
		printf("%.1f %.1f\n",appr1,appr2);
	}
}
