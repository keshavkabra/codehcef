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
#define SIZE 3000100
#define MOD 1000000
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int S[SIZE];

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		
		cin>>N;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		
		S[0]=d;
		f(i,1,N)
		{
			S[i]=((a*((S[i-1]%MOD)*(S[i-1]%MOD))%MOD)%MOD+(b*(S[i-1]%MOD))%MOD+c)%MOD;
		}
		qsort(S,N,sizeof(int),compare);
		int dif=0;
		int i;
		for(i=N-1;i>=1;i=i-2)
		{
			dif=dif+S[i]-S[i-1];
		}
		if(i==0)
			dif+=S[0];
		cout<<dif<<endl;
	}
}
