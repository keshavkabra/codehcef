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
	int N,Q,L,R,K,count;
	int A[100100];
	cin>>N>>Q;
	for(int i=0;i<N;i++)
		cin>>A[i];
	for(int i=0;i<Q;i++)
	{
		count=0;
		cin>>L>>R>>K;
		for(int j=L-1;j<R;j++)
			if(A[j]%K==0)
				count++;
		cout<<count<<endl;
	}
}
