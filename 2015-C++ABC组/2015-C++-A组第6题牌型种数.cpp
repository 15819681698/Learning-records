#include<iostream>
using namespace std;
int ans;
void f(int k,int cnt)
{
	if(k>13||cnt>13)return;
	if(k==13&&cnt==13) ans++;
	
	for(int i=0;i<5;i++){
		f(k+1,cnt+i); 
	}
}

int main()
{
	f(0,0);
	cout<<ans;
 } 
 //´ğ°¸£º3598180 
