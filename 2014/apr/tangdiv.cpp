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
#define SIZE 510
using namespace std;


int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int searchkey(int a[],int k,int l,int r)
{
	int mid=(l+r)/2;
	if((a[mid]<=k && a[mid]>=k) ||(mid==r))
		return mid;
	else
	{
		if(a[mid]>k)
			return searchkey(a,k,l,mid-1);
		else
			return searchkey(a,k,mid+1,r);
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k,p;
		cin>>n>>k>>p;
		int flag=0;
		//int a[SIZE];
		vector<int> a;
		int x[SIZE],y[SIZE];
		for(int i=0;i<k;i++)
		{
			cin>>x[i]>>y[i];
		}
		map<int,int> m;
		for(int j=0;j<p;j++)
		{
			int l,r;
			cin>>l>>r;
			a.push_back(l);
			m.insert(make_pair(l,r));
		}	
		sort(a.begin(),a.end());
//		qsort(a,p,sizeof(int),compare);
//		for(int i=0;i<p;i++)
	//		cout<<a[i]<<" ";
		for(int i=0;i<k;i++)
		{
			vector<int>::iterator temp=lower_bound(a.begin(),a.end(),x[i]-1);
			cout<<x[i]-1<<" "<<a[temp-a.begin()]<<" "<<endl;
		/*	if(!(temp<=x[i] && m[temp]>=y[i]))
			{
				flag=1;
				cout<<"BREAKING";
				break;
				
			}
	*/	}
		
		if(flag!=1)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	//memset(a,'0',p);
	}
}
