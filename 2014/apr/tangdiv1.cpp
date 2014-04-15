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

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k,p,flag=0;
		int l[510],r[510],a[510],b[510];
		cin>>n>>k>>p;
		for(int i=0;i<k;i++)
		{
			cin>>l[i]>>r[i];
		}
		sort(l,l+k);
		sort(r,r+k);
		for(int i=0;i<p;i++)
		{
			cin>>a[i]>>b[i];
		}
		for(int i=0;i<p;i++)
		{
			if(((int *)bsearch(&a[i],l,k,sizeof(int),compare))==NULL || ((int *)bsearch(&b[i],r,k,sizeof(int),compare))==NULL)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}


}
