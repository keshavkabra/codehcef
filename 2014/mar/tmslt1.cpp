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
#define SIZE 3000100
#define MOD 1000000
#define MOD1 1001000
using namespace std;

int S[SIZE];
int C[MOD1];
int R[MOD1];
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		memset(C,0,MOD*sizeof(int));
		memset(R,0xff,MOD*sizeof(int));
		S[0]=d;
		C[d]++;
		long long temp;
		f(i,1,N)
		{
			if(R[S[i-1]]==-1){
			temp=S[i-1];
			R[S[i-1]]=((a*(temp*temp)%MOD)+(b*S[i-1])%MOD+c)%MOD;
			}
			S[i]=R[S[i-1]];
			C[S[i]]++;
		}
		int turn=1,dif=0;
		for(int i=MOD-1;i>=0;i--)
		{
			
			if(C[i]!=0 && C[i]&1)
			{
				if(turn==1)
				{
					dif=dif+i;
					turn++;
				}
				else
				{
					dif=dif-i;
					turn--;
				}
			}
		}
		cout<<dif<<endl;
	}
}
