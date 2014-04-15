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
#define SIZE 100100
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int count2=0,count3=0;
		int N;
		cin>>N;
		for(int i=0;i<N;i++)
		{
			int temp;
			cin>>temp;
			if(temp<2)
				continue;
			else if(temp==2)
				count2++;
			else if(temp>=3)
				count3++;
		}
		unsigned long long ans=(((unsigned long long)count3-1)*(unsigned long long)count3)/2+count2*(unsigned long long)count3;
		cout<<ans<<endl;
	}
}
