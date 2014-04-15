#include<iostream>
#include<cmath>
using namespace std;
#define MOD 5
#define ll long long

void extended_euclid(ll x,ll y,ll *c,ll *a,ll *b){
  ll a0,a1,a2,b0,b1,b2,r0,r1,r2,q;
  r0=x; r1=y; a0=1; a1=0; b0=0; b1=1;
  while(r1>0){
    q=r0/r1; r2=r0%r1; a2=a0-q*a1; b2=b0-q*b1;
    r0=r1; r1=r2; a0=a1; a1=a2; b0=b1; b1=b2;
  }
  *c=r0; *a=a0; *b=b0;
}

ll get_inv(ll n, ll p){
  ll a,b,c;
  extended_euclid(n,p,&c,&a,&b);
  if(a<p) a+=p;
  return a%p;
}
int main()
{
	int a=4,b;
	cin>>b;
	cout<<get_inv(a,MOD)<<endl;
	return 0;
}
