#include<iostream>

using namespace std;

int power2(int k)
{
	return 2<<k;
}

int main()
{
	int n;
	cin>>n;
	cout<<power2(n);
	return 0;
}
