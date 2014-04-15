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
	int N;
	cin>>N;
	int x1,x2,x3,y1,y2,y3;
	int count=0;
	for(int i=0;i<N;i++)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int a=pow(x1-x2,2)+pow(y1-y2,2);
		int b=pow(x2-x3,2)+pow(y2-y3,2);
		int c=pow(x3-x1,2)+pow(y3-y1,2);
		if(a+b==c || b+c==a || c+a==b)
			count++;
	}
	
	cout<<count;
}
