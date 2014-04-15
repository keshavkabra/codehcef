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
		int N,maxi=0,t;
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>t;
			if(maxi<t+i)
				maxi=t+i;
		}
		cout<<maxi<<endl;
	}

}
