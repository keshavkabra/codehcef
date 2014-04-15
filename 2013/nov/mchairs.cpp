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
#define MOD 1000000007
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;

void mchairs(int n)
{
	long long int res=1,power=2;
	while (n>0) {
		if(n%2==1)
			res=(res*power)%MOD;
			power=(power*power)%MOD;
			n/=2;
	}
	cout<<res-1<<endl;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mchairs(n);
	}
} 
