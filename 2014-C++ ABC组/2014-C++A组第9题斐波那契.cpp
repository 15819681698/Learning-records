#include<iostream>
#include<cstring>
using namespace std;
typedef unsigned long long LL;
 
LL n,m,mod; 
class M
{public:
	LL a[2][2];
	M(){memset(a,0,sizeof(a));}
};
M* mul(M* A,M* B)
{
	M* C = new M();
	C->a[0][0]=((A->a[0][0]*B->a[0][0])+(A->a[0][1]*B->a[1][0]));
	C->a[0][1]=((A->a[0][0]*B->a[0][1])+(A->a[0][1]*B->a[1][1]));
	C->a[1][0]=((A->a[1][0]*B->a[0][0])+(A->a[1][1]*B->a[1][0]));
	C->a[1][1]=((A->a[1][0]*B->a[0][1])+(A->a[1][1]*B->a[1][1]));
	return C;	
} 
M* mpow(M* m,int n)
{
	M* E = new M();//µ¥Î»¾ØÕó 
	E->a[0][0]=1;
	E->a[1][1]=1;
	while(n!=0){
		if(n&1==1){
		E=mul(E,m);	
		}
	m = mul(m,m);
	n>>=1;
   }
   return E;
 } 

LL fid(int i)
{
	M* A=new M();
	M* B=new M();
	A->a[0][0]=1;
	A->a[0][1]=1;
	B->a[0][0]=1;
	B->a[0][1]=1;
	B->a[1][0]=1;
	M* ans=mul(A,mpow(B,i-2)); 
	return ans->a[0][0]; 
}

LL sovle()
{
	if(n+2<=m)
	{
		return fid(n+2)%mod-1;
	}
	else
	{
		return (fid(n+2)-1)%fid(m)%mod;
	}
	
}

int main()
{
	cin>>n>>m>>mod;
	cout<<sovle(); 
	return 0;
}
