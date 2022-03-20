#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{	 int n,i,j;
	 cin>>n;
	 int a[n],dp[n][2];
	 for(i=0;i<n;i++)
	 	cin>>a[i];
	 dp[0][1]=a[0];
	 dp[0][0]=0;	  
	 for(i=1;i<n;i++)
	 {
	 	dp[i][0]=min(dp[i-1][1],dp[i-2][1]);
	 	dp[i][1]=min(dp[i-1][0],dp[i-1][1])+a[i];
	 }
	 cout<<min(dp[n-1][0],dp[n-1][1])<<endl;
}
