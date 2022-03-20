#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef long long ll;
int n;
ll data[100];
struct Ratio{
	ll x,y;
	Ratio(ll _x,ll _y):x(_x),y(_y){
		ll _gcd = gcd(x,y);
		x/=_gcd;
		y/=_gcd;
	}
	ll gcd(ll a,ll b){
		if(b==0) return a;
		return gcd(b,a%b);
	}
};
vector<Ratio>ratios;
map<ll, map<ll, ll> > all_ex;
map<ll, map<ll, ll> > all_log;

void init(){
	for(int i=2;i<1e6;i++){
		ll cur=(ll)i*i;
		int pow=2;
		while(cur<1e12){
			all_ex[cur][pow]=i;
			all_log[cur][i]=pow;
			pow++;
			cur*=i;
		}
	}
}

ll extract(ll x,ll pow){
	if(pow==1) return x;
	if(x==1) return 1;
	if(all_ex[x].find(pow)!=all_ex[x].end())
		return all_ex[x][pow];
	return -1;
}
 
ll log(ll x,ll base){
	if(base==x) return 1;
	if(all_log[x].find(base)!=all_log[x].end())
		return all_log[x][base];
	return -1;
}

int main()
{
	init();
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data[i]; 
	}
	
	sort(data,data+n);
	
	if(n==2){
		Ratio ans=Ratio(data[1],data[0]);
		cout<<ans.x<<"/"<<ans.y<<endl;
		return 0;
	}
	
	for (int i=0;i<n-1;i++){
		if(data[i+1]!=data[i])
		ratios.push_back(Ratio(data[i+1],data[i]));
	}
	
	for(int pow=0;pow<=40;pow++){
		Ratio ra0=ratios[0];
		ll x=ra0.x;
		ll y=ra0.y;
		ll base_x=extract(x,pow); //尝试对x开pow次方 
		ll base_y=extract(y,pow); //尝试对y开pow次方
		if(base_x==-1||base_y==-1) continue;
		bool all_match=true;
		for(int i=1;i<ratios.size();i++){
			ll xx=ratios[i].x;
			ll yy=ratios[i].y;
			ll log_x=log(xx,base_x); //base_x的log_x次方为xx 
			ll log_y=log(yy,base_y); //base_y的log_y次方为yy
			if(base_y==1&&yy==1) log_y=log_x;
			if(log_x==-1||log_y==-1||log_x!=log_y){
				all_match=false;
				break;
			} 
		}
		if(all_match){
			Ratio ans=Ratio(base_x,base_y);
			cout<<ans.x<<"/"<<ans.y<<endl;
			return 0;
		}
	}

 } 
