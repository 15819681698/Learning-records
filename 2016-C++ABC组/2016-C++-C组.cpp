//2016-C++-C组第1题 ——报纸页数
/*用书本的中间隔离
例如： 
4     5
3     6
2     7
1     8
   V 
*/

//2016-C++-C组第3题  ——平方怪圈
/*
#include<iostream>
#include<string.h>
#include<sstream> 
using namespace std;
int extract(int s)
{
	string str;
	stringstream ss;
	ss<<s;
	ss>>str;
	int ans=0;
	for(int i=0;i<str.length();i++){
		ans=ans+int(str[i]-'0')*int(str[i]-'0');
	}
	return ans;
}
int main()
{
	int start=9999;
	int cnt=0;
	while(cnt<20){
		cout<<start<<endl;
		int sum=extract(start);
		start=sum;
		cnt++; 
	}
 } 
 //答案：145 
*/

 //2016-C++-C组第8题  ——冰雹数
 #include<iostream>
 using namespace std;
 typedef long long ll;
 ll n;
 ll f(int i)
 {
 	ll ans=-1;
	 while(i!=1){
			if(i>ans) ans=i;
			i= (i%2==1) ? 3*i+1 : i/2;
		}
	return ans;
 }
 int main()
{
	cin>>n;
	ll ans=-1;
	for(int i=1;i<=n;i++){
		ll res=f(i);
		if(res>ans) ans=res;
	}
	cout<<ans<<endl;
	return 0;
}

