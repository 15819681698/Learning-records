// Ä£ÄâÌâ 
#include<iostream>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	while(n>=3){
		n-=2;
		ans+=3;
	}
	ans+=n;
	cout<<ans; 
	return 0;
 } 
