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
	int min = 1e9;
	int max = -1;
	int max_ind,min_ind;
	for(int i=1;i<=N;i++)
	{
		int x1,x2,x3,y1,y3,y2;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int area = abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2);
		if(area>=max)
		{
			max=area;
			max_ind=i;
		}
		if(area<=min)
		{
			min=area;
			min_ind=i;
		}
	}
	cout<<min_ind<<" "<<max_ind;
}
