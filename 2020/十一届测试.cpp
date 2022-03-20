// 第一题
/* 
#include<iostream>
using namespace std;
int main()
{
	int a=10000;
	int i=0;
	while(a>0){
		i++;
		if(i%2!=0) a=a-600;
		else a=a+300;
		cout<<a<<" "<<i<<endl;
	} 
 } 
 */
 
//第二题
/* 
#include<iostream>
using namespace std;
bool isyear(int i){
	return (i%4==0&&i%100!=0)||(i%400==0); 
}
int main()
{
	int a=0;
	for(int i=1922;i<=2020;i++){
		if(isyear(i))a+=366;
		else a+=365;
	}
	a-=22;
	cout<<a<<endl;
	cout<<a*24*60<<endl;
 } 
*/

// 第三题
/*
#include<iostream>
using namespace std;
int main()
{
	int ans;
	int min=100000;
	int dan;
	for(int k=1;k<=100;k++){
		
		if(100%k==0) ans=100/k+k;
		else ans=100/k+k+1;
		cout<<k<<" "<<ans<<endl;
		if(ans<min){
			min=ans;
			dan=k;
		}	
	}
	cout<<min<<" "<<dan<<endl;
 } 
 */

//第五题
/*
#include<iostream>
#include<algorithm>
using namespace std;
int a[2020];
int ans=0;
bool cheak(){
	for(int i=0;i<1010;i++){
		if(a[i]>a[i+1]) return false; 
	}
	for(int i=1010;i<2020;i++){
		if(a[i]>a[i+1]) return false;
	}
	for(int i=0;i<1010;i++){
		if(a[i]>a[i+1010]) return false;
	}
	return true;
}
int main()
{
	for(int i=0;i<2020;i++) a[i]=i+1;
	do{
		if(cheak()) {
			ans++;
			ans=ans%2020;
		}
	}while(next_permutation(a,a+2020));
 } 
 */
//第六题
/*
#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	for(long long int i=n;i>0;i=i/2)
	{
		if(i>0) cout<<i<<" ";
		else break;
	}
 }
*/

// 第七题
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
string a;
string b;
int main()
{
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]>='1'&&a[i]<='9') {
			for(int j=0;j<a[i]-'0'-1;j++) b=b+a[i-1];
			continue;
		}
		b=b+a[i];
	}
	cout<<b;
 } 
