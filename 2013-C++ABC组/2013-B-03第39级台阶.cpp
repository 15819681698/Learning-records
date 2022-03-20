#include<iostream>
using namespace std;

int ans=0;
void f(int n,int step)
{
	if(n<0) return;
	if(n==0&&step%2==0){
		ans++;
		return;
	}
	f(n-1,step+1);
	f(n-2,step+1);	
}
int main()
{
	f(39,0);
	cout<<ans; 
	return 0;	
 } 
