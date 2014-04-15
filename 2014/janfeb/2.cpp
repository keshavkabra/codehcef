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
	int a[60];
	f(i,0,N)
		cin>>a[i];
	int Q;
	cin>>Q;
	f(i,0,Q)
	{
		int K,count=0;
		cin>>K;
		f(j,0,N)
		{
			if(a[j]==K)
			{
				int y=1,z=1,f1=0,f2=0;
				for(int k=1;;k++)
				{
					if(j-k>=0)
					{
						if(a[j-k]>=a[j] && f1==0)
							y++;
						else
							f1=1;
					}
					
					if(j+k<=N-1)
					{
						if(a[j+k]>a[j] && f2==0)
							z++;
						else
							f2=1;		
					}
					if((j-k<0) && (j+k>N-1))
						break;
				}
				count=count+y*z;
			}
		}
		cout<<count<<endl;
	}
}
