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
#define SIZE 500500
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int N,K;
	cin>>N>>K;
	int a[SIZE];
	
	map<int,int> v;
	f(i,0,N)
		{
			cin>>a[i];
			if(v.count(a[i])>0)
			{
				v[a[i]]=fmin(fmin(i+1,N-i),v[a[i]]);
				//v[min(min(i,N-1-i),a[i])]=min(i,N-i-1);
			}
			else
				v[a[i]]=fmin(i+1,N-i);
		}
		qsort(a,N,sizeof(int),compare);
		int count=1e7;
		for(int i=0;i<N;i++)
	{
		int *ptr;
		int key=K-a[i];
		if(key!=a[i]){
		ptr=(int*)bsearch(&key,a,N,sizeof(int),compare);
		if(ptr!=NULL)		
		{
			if(count>fmax(v[key],v[a[i]]))
				count=fmax(v[key],v[a[i]]);
			/*	cout<<v[key]<<" "<<v[a[i]];
				char x;
				cin>>x; */
		}
	}
	}
	if(count==1e7)
		cout<<"-1";
	else
		cout<<count;
	//pItem=(int*)bsearch(&key,values,N sizeof(int),compare);
	
	//cout<<bin_search(v,0,N-1,3);
}
