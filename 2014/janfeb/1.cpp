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
#define SIZE 10100
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b );
}

int main()
{
	int T;
	char A[SIZE],B[SIZE];
	cin>>T;
	while(T--)
	{
		int count=0,ai=0,bi=0;
		cin>>A>>B;
		int al=strlen(A);
		int bl=strlen(B);
		qsort(A,al,sizeof(char),compare);
		qsort(B,bl,sizeof(char),compare);
		for(ai=0,bi=0;;)
		{
			if(ai==al || bi==bl)
				break;
			if(A[ai]==B[bi])
			{
				count++;
				ai++;
				bi++;
			}
			else if(A[ai]>B[bi])
			{
				bi++;
			}
			else
				ai++;
		}
		cout<<count<<endl;
	}
}
