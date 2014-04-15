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
	int t,n,k,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		temp=a[k-1];

		sort(a.begin(),a.end());
		int i;
		for(i=0;i<n;i++)
			if(a[i]==temp)
				break;
		cout<<++i<<endl;
	}
}
