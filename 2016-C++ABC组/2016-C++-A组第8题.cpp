#include<iostream>
#include<cmath>
#include<map> 
using namespace std;
int main()
{
	map<int,int>cache;
	int N;
	cin>>N;
	for(int c=0;c*c<=N/2;c++){
		for(int d=0;c*c+d*d<=N;d++){
			if(cache.find(c*c+d*d)==cache.end())
				cache[c*c+d*d]=c;
		}
	}
	for(int a=0;a*a<=N/4;a++){
		for(int b=0;a*a+b*b<=N/2;b++){
			if(cache.find(N-a*a-b*b)!=cache.end()){
				int c=cache[N-a*a-b*b];
				int d=int (sqrt(N-a*a-b*b-c*c));
				cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
				return 0;
			}
		}
	} 
 } 
