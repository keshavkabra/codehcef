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

int a[1000100],bit[1000100],n;

void bit_write(int i ,int v)
{
	while (i <= n){
		bit[i] += v;
		i+=(i & -i);
	}
}

int bit_read(int i){
	int s = 0;
	while (i > 0){
		s += bit[i];
		i-=(i & -i);
	}
	return s;
}

int main()
{
	int q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		bit_write(i,a[i]);
	}
	while(q--)
	{
		char c;
		int i,j;
		cin>>c>>i>>j;
		if(c=='G')
			bit_write(i+1,j);
		if(c=='T')	
			bit_write(i+1,-j);
		if(c=='S')
			cout<<bit_read(j+1)-bit_read(i)<<endl;
	}	
}
