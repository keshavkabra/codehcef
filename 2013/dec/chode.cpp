#include <iostream>
#include<map>
#include<set>
#include<string>
#include<cstdio>
#include<sstream>
using namespace std;



int main() {
	
	string t1;

	int t;
	cin>>t>>ws;	
	string cip,str;
	while(t--){
	std::getline(std::cin,cip);
	std::getline(std::cin,str);
	string::iterator it;
	map<char,int> data;
	for(it=str.begin();it!=str.end();it++)
	{
		if((*it>='a' && *it<='z') || (*it>='A' && *it<='Z'))
		{
			if(*it>='A' && *it<='Z')
				data[*it+'a'-'A']+=1;
			else
				data[*it]+=1;
		}
	}	
	
	map<char,int>::iterator m;
	set< pair<int,char> >s;
	for(m=data.begin();m!=data.end();m++)
	{
		pair<int,char> p(m->second,m->first);
		s.insert(p);
	}
	set< pair<int,char> >::reverse_iterator st;
	string::reverse_iterator rit=cip.rbegin();
	char temp[26];
	for(st=s.rbegin();st!=s.rend();)
	{
	
		int val=st->first;
		while(st->first==val)
		{
			temp[st ->second - 'a']= *rit;
			st++;
			rit++;
		}
	
	}
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
			cout<<temp[str[i]-'a'];
		else if(str[i]>='A' && str[i]<='Z')
			cout<<(char)(temp[str[i]-'A']-'a'+'A');
		else
			cout<<str[i];
	}
	cout<<endl;
}
	return 0;
}
