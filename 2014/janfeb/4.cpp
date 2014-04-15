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
#define SIZE 1000
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,K;
		cin>>N>>M>>K;
		vector<pair<int,pair<int,int> > > v;
		int a[SIZE],b[SIZE][SIZE],c[SIZE][SIZE];
		for(int i=0;i<N;i++)
			cin>>a[i];
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++)
				cin>>b[i][j];
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++)
			{
				cin>>c[i][j];
				v.push_back(make_pair(b[i][j],make_pair(i,j)));
			}

	}
}
