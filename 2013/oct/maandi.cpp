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
#define MAX 10000000
using namespace std;

int prime[MAX];
int prim[MAX/2];
int overlucky[MAX];
int over[MAX];
int main()
{
	int prim_c=0,over_c=0;
	for(int i=2;i<MAX;i++)
	{
		if(prime[i]==0)
		{
			prim[prim_c]=i;
//			if(prim_c<100)
	//		cout<<prim[prim_c]<<" ";
			prime[i]=1;
			for(int j=2*i;j<=MAX;j=j+i)
				prime[j]=-2;
			prim_c++;
		}
		int temp=i;
		while(temp>0)
		{
			int t=temp%10;
			if(t==4 || t==7)
			{
				overlucky[i]=1;
				over[over_c++]=i;
				break;
			}
			temp=temp/10;
		}
	}
	int T;
	cin>>T;
	prim[0]=2;
	while(T--)
	{
		long int n;
		cin>>n;
		long int count=0;
		long int ind=0;
		
		while(over[ind]<=n/2)
		{	
	
			if(n%over[ind]==0)
				count++;
	/*		int temp=over[ind];
			for(int i=temp;i<=n;i=i+temp)
			{
				if(n%i==0 && overlucky[i]==1) 
					count++;
			}
		*/	ind++;
		}
		cout<<count<<endl;
	}
	
	
	
	//for(int i=0;i<100;i++)
		//cout<<over[i]<<" ";
		
//		if(overlucky[i]==1)
	//		cout<<i<<" ";

}
