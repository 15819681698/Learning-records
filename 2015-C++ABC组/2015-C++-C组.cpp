//2015-C++-C组第1题 ——隔行变色 
/*
#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	for(int i=21;i<=50;i++){
		if(i%2!=0) ans++;
	}
	cout<<ans;
 } 
*/

//2015-C++-C组第2题 ——立方尾不变
/*
//方法一：这种解题方法比较用到技巧 
#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	for(long long i=1;i<10000;i++){
		if(i<10){
			if(i*i*i%10==i) ans++;
		}else if(i<100){
			if(i*i*i%100==i) ans++; 
		}else if(i<1000){
			if(i*i*i%1000==i) ans++; 
		}else if(i<10000){
			if(i*i*i%10000==i) ans++; 
		}
	}
	cout<<ans;
 } 
 */
/*
//方法二：这种解法比较容易想到，但会用substr(start,length)(start：从下标为start的位置开始读取，如果没length就读到末尾，有就读取length的长度)这个函数。 
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int ans=0;
void check(long long ii,long long i)
{
	string istr,iistr;
	stringstream s1;
	s1<<i;
	s1>>istr;
	stringstream s2;
	s2<<ii;
	s2>>iistr;
	if(iistr.substr(iistr.length()-istr.length())==istr){
		ans++;
	} 
}
int main()
{
	for(long long i=1;i<10000;i++){
		check(i*i*i,i);
	}
	cout<<ans;
}
*/

//2015-C++-C组第9题 ——打印大X
/*
#include<iostream> 
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int w=m+(n/2)*2;
	char g[n][w];
	for(int i=0;i<n;i++){
		for(int j=0;j<w;j++){
			g[i][j]='.';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			g[i][j+i]='*';
	    }
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			g[i][w-1-i-j]='*';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<w;j++){
			cout<<g[i][j];
		}
		cout<<endl;
	}
}
*/
