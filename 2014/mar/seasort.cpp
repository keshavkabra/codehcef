#include<iostream>

using namespace std;

int main()
{
	int n,a[10100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int c=0,l=0,r=0;
	for(int i=0;i<n-1;i++)
	{
		
		if(a[i]>a[i+1])
		{
			r++;
		}
		else
		{
			if(r!=l)
			{
				cout<<l<<" "<<r<<endl;
				r=l=i+1;
			}
			else
			{
				r=l=i+1;
			}
		}
	}
}
