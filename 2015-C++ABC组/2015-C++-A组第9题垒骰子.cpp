#include<iostream>
typedef long long ll;
using namespace std;
int n,m;
int op[7];
const int MOD=1000000007; 
class M{
	public: ll a[6][6];
	M(){
		for(int i=0;i<6;i++)
			for(int j=0;j<6;j++)
				a[i][j]=1;
	}
};
int init()
{
	op[1]=4;
	op[2]=5;
	op[3]=6;
	op[4]=1;
	op[5]=2;
	op[6]=3;
}
// 6*6矩阵的相乘 
M mMultiply(M m1,M m2){
	M ans;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			ans.a[i][j]=0;
			for(int k=0;k<6;k++){
				ans.a[i][j]=(ans.a[i][j]+m1.a[i][k]*m2.a[k][j])%MOD;
			}
		}
	}
	return ans;
}
//矩阵的k次方 
M mpox(M m,int k){
	M ans;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(i==j) ans.a[i][j]=1;
			else ans.a[i][j]=0;
		}
	}
	while(k!=0){
		if((k&1)==1) ans=mMultiply(ans,m);
		m=mMultiply(m,m);
		k>>=1;
	}
	return ans;
}
int main()
{
	init();//正反对面 
	cin>>n>>m;
	M cMatrix; //冲突矩阵 
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		cMatrix.a[op[a]-1][b-1]=0;
		cMatrix.a[op[b]-1][a-1]=0; 
	}
	M m=mpox(cMatrix,n-1); //冲突矩阵的n-1次方 
	ll ans=0;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			ans=(ans+m.a[i][j])%MOD;
		}
	}
	// 4的n次方 
	ll t=1,tmp=4;
	while(n!=0){
		if((n&1)==1) t=(t*tmp)%MOD;
		tmp=(tmp*tmp)%MOD;
		n>>=1; 
	}
	cout<<t*ans%MOD;
 } 
