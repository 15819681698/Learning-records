#include<iostream>
#include<cstring>
using namespace std;
int n,s,a,b;
typedef long long LL;
const int MOD=100000007; 
LL ans =0; 
void dp()
{
	int t = n*(n-1)/2;
	int dp[t+1];  //һά���飬��ʡ�ռ� 
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=i*(i+1)/2;j>=i;j--) //�Ӻ����Ƶ�ǰ�棨01�����������չ�� 
		{
			dp[j]=(dp[j]+dp[j-i])%MOD;
		 } 
	}
	for(LL ta=0;ta<=t;ta++)
	{
		if((s-ta*a+(t-ta)*b)%n==0) // ͨ����������Ƴ����� 
		    (ans+=dp[ta])%=MOD;
	}
	cout<<ans<<endl;	
}

int main()
{
	cin>>n>>s>>a>>b; 
	dp();
	return 0;
}
