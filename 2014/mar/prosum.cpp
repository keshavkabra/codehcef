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
#define SIZE 100100
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int find3(int a[],int low,int high)
{
	if(low==high && a[low]!=3)
		return -1;
	else
	{
		int mid=(low+high)/2;
		if(a[mid]>3)
		{
			return find3(a,low,mid-1);
		}
		else if(a[mid]<3)
		{
			return find3(a,mid+1,high);
		}
		else
		{
			while(a[mid]==3)
				mid--;
			return mid+1;
		}
	}
}

int main()
{
	int T,a[SIZE];
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		for(int i=0;i<N;i++)
			cin>>a[i];
		qsort(a,N,sizeof(int),compare);
		int index=find3(a,0,N-1);
		if(index==-1)
			cout<<"0"<<endl;
		else
		{
			int m=N-index;
			int count2=0;
			index--;
			while(a[index]==2 && index>=0)
			{
				count2++;
				index--;
			}
			cout<<m*count2+m*(m-1)/2<<endl;
		}
	}
}
