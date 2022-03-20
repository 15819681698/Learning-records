#include<iostream>
using namespace std;
int main()
{
	int n;//蚂蚁只数 
	cin>>n;
	int a[n]; //蚂蚁的位置，第一只为感冒的蚂蚁1 
	for(int i=0;i<n;i++) cin>>a[i]; 
	int x=a[0];
	if(x>0){ //感冒那一只向右 
		int ans=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]<0&&-a[i]>x) //与感冒的蚂蚁1相向而来的会感冒 
			ans++;
		}
		if(ans!=1){//若有与感冒的蚂蚁1相向的蚂蚁，就在感冒的蚂蚁1后面的同向蚂蚁也会感冒 
			for(int i=0;i<n;i++){
				if(a[i]>0&&a[i]<x)
				ans++;
			}
		}
		cout<<ans;	
	}
	if(a[0]<0){  //与向右相反 
		int ans=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]>0&&a[i]<-x)
			ans++;
		}
		if(ans!=1){
			for(int i=0;i<n;i++){
				if(a[i]<0&&a[i]<x)
				ans++;
			}
		}
		cout<<ans;	
	}
	return 0;
 } 
