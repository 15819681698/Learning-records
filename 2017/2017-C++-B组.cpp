//2017-C++-B���2�� �����Ȳ�������
/*
#include<iostream>
#include<set>
using namespace std;
typedef long long ll;
const int n=5000;
ll a[n];
set<ll>all;
bool isprime(ll t)
{
	for(int i=2;i<t/2;i++){
		if(t%i==0) return false;
	}
	return true;
}
int f()
{
	for(int i=0;i<5000;i++){//ö������ 
		ll first=a[i];
		for(ll j=1;j<a[n-1]-first;j++){//ö�ٲ�ֵ 
			ll m=first;
			for(int k=1;k<10;k++){//ö�ٸ��� 
				m=m+j;
				if(all.find(m)==all.end()) break;
				if(k==9){
					return j;
				}
			}
		}
	}
	return -1;
}
int main()
{
	a[0]=2;
	a[1]=3;
	all.insert(2);
	all.insert(3);
	int t=5;
	int i=2;
	while(i<5000){
		if(isprime(t)){
			a[i++]=t;
			all.insert(t);
		}
		t++;
	}
	cout<<f()<<endl;
	return 0;
 }
 */

// 
