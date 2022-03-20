#include<iostream>
#include<algorithm>
using namespace std;
const int N = 110;
int dp[N][N];
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) dp[i][0]=0;
    for(int i=0;i<=n;i++) dp[0][i]=1;
    
    //dp[i][j]表示把i拆分成不超过j的方案数 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //dp[i][j]只有包含j和不包含j两种情况
            //dp[i][j-1]不包含j,dp[i-j][j]包含若干个j 
            if(i>=j) dp[i][j]=dp[i][j-1]+dp[i-j][j]; 
            else dp[i][j]=dp[i][i]; 
        } 
    }
    printf("%d",dp[n][n]);
    return 0;
}
