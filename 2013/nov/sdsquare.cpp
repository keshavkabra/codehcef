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
#define MOD 1000000000
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int isperfect(long int a)
{
	while(a>0)
	{
		if(a%10==0 || a%10==1 || a%10==4 || a%10==9)
			a=a/10;
		else
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int a,b;
		int count=0;
		cin>>a>>b;
		int as=floor(sqrt(a));
		int bs=ceil(sqrt(b));
		for(int i=as;i<=bs;i++)
		{
			long int i2=(long int)i*i;
			if(isperfect(i2) && i2>=a && i2<=b){
				cout<<i<<" "<<i2<<endl;
				count++;
			}
		}
		cout<<count<<endl;
	}
}
