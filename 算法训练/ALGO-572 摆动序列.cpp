#include<iostream>
using namespace std;
int main()
{ int k;
  cin>>k;
  int dp[21][21];
  long sum=0;
  for(int i=2;i<=k;i++)
     { dp[i][i]=2;
       dp[i][2]=i*(i-1);
       for(int j=3;j<i;j++)
          dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
  }
  for(int i=2;i<=k;i++)
  sum=sum+dp[k][i];
  cout<<sum;
}
