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
#define MOD 1000000007
using namespace std;

int pow2arr[100];

long long int pow2(int n)
{
	long long int res=1,power=2;
	while (n>0) {
		if(n%2==1)
			res=(res*power)%MOD;
			power=(power*power)%MOD;
			n/=2;
	}
	return res;
}

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<21;i++)
	{
		pow2arr[i]=pow2(pow(10,i-1));
	}
	while(t--)
	{
		int n,a[100],c=1;
		cin>>n;
		while(n>0) 
		{
			a[c++]=n%2;
			n=n/2;
		}
		long long int ans=1;
		for(int i=1;i<c;i++)
		{
//			int t=pow2arr[i]%MOD;
//			if(t==0)
//				t=1;
//			int at=a[i]*t;
			if(a[i]!=0)
			{
				ans=(ans*(a[i]*pow2arr[i])%MOD)%MOD;
			}
		}
		cout<<(ans*ans)%MOD<<endl;
	}
}
