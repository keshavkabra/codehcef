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
		int N;
		cin>>N;
		int L[1010],R[1010];
		for(int i=0;i<N;i++)
		{
			cin>>L[i]>>R[i];
		}
		int count=0;
		for(int i=0;i<N-1;i++)
		{
			count+=abs(L[i+1]-L[i])+abs(R[i+1]-R[i]);
		}
		cout<<count<<endl;
		for(int i=0;i<N-1;i++)
		{
			if(L[i]<L[i+1])
			{
				int l=L[i];
				int r=R[i];
				while(l!=L[i+1])
				{
					if(l+1<r)
					{
						cout<<"L+";
						l++;
					}
					else
					{
						cout<<"R+";
						r++;
					}
				}
				while(r!=R[i+1])
				{
					if(r>R[i+1])
					{
						cout<<"R-";
						r--;
					}
					else
					{
						cout<<"R+";
						r++;
					}
				}
			}

			else if(L[i]>L[i+1])
			{
				int l=L[i];
				int r=R[i];
				while(l!=L[i+1])
				{
					cout<<"L-";
					l--;
				}
				while(r!=R[i+1])
				{
					if(r>R[i+1])
					{
						cout<<"R-";
						r--;
					}
					else
					{
						cout<<"R+";
						r++;
					}
				}
			}
			else
			{
				int r=R[i];
				while(r!=R[i+1])
				{
					if(r>R[i+1])
					{
						cout<<"R-";
						r--;
					}
					else
					{
						cout<<"R+";
						r++;
					}
				}
			}	
		}
		cout<<endl;
	}
}
