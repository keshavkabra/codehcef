#include<iostream>
#include<map>
#include<set>
#include<string>
#include<cstdio>
#include<sstream>
#include<algorithm>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main() {
	int t;
	cin>>t>>ws;	
	string cip,str;
	while(t--){
	std::getline(std::cin,cip);
	std::getline(std::cin,str);
	int data[26];
	for(int i=0;i<26;i++)
		data[i]=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			if(str[i]>='A' && str[i]<='Z')
				data[str[i]-'A']+=1;
			else
				data[str[i]-'a']+=1;
		}
	}
//	cout<<str<<endl;
//	for(int i=0;i<26;i++)
//		cout<<data[i]<<" ";
	int data1[26];
	int temp[26];
	for(int i=0;i<26;i++)
		data1[i]=data[i];
	qsort(data,26,sizeof(int),compare);
//	for(int i=0;i<26;i++)
//		cout<<data[i]<<" ";
	string::reverse_iterator rs=cip.rbegin();
	for(int i=0;i<26;i++)
		temp[i]=0;
	for(int i=25;i>=0 && data[i]>0;i--)
	{
		int val=data[i];
		for(int j=25;j>=0;j--)
		{
			if(data1[j]==val)
			{
			//	cout<<*rs;
				temp[j]=*rs;
				data1[j]=-1;
				rs++;
			}
		}
	}
//	for(int i=0;i<26;i++)
//		cout<<(char)temp[i]<<" ";
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
			cout<<(char)temp[str[i]-'a'];
		else if(str[i]>='A' && str[i]<='Z')
			cout<<(char)(temp[str[i]-'A']-'a'+'A');
		else
			cout<<(char)str[i];
	}
	cout<<endl;
	}
}	
