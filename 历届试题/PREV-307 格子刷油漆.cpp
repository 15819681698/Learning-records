#include<iostream>
using namespace std;
#define inf 1000000007
#define ll long long
ll a[1011],b[1011];
int main()
{
	int n;
	cin>>n;
	b[1]=1,a[1]=1;
	b[2]=2,a[2]=6;
	for(int i=3;i<=n;i++){
		b[i]=b[i-1]*2%inf;
		a[i]=(2*a[i-1]+4*a[i-2]+2*b[i-1])%inf;
	} 
	ll ans1=0,ans2=0;
	if(n==1){
		cout<<2;
	}else{
		ans1=4*a[n]%inf;
		for(int i=2;i<n;i++)
			ans2+=8*(b[i-1]*a[n-i]%inf+b[n-i]*a[i-1]%inf)%inf;
		cout<<(ans1+ans2)%inf;
	}
	
 } 
 // https://www.cnblogs.com/aeipyuan/p/10704483.html
