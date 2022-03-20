#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	string s="aaabbbbccccc";
	vector<string>v;
	int ans=0;
	do{
		int i=0;
		for(;i<v.size();i++)
		{
			if(v[i].find(s)!=string::npos) break; //find函数在找不到指定值得情况下会返回string::npos
		}
		if(i!=v.size()) continue;
		string s1=s+s;
		v.push_back(s1);
		reverse(s1.begin(),s1.end());
		v.push_back(s1);
		ans++;
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans;
	
 } 
