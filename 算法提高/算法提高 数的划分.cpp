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
    
    //dp[i][j]��ʾ��i��ֳɲ�����j�ķ����� 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //dp[i][j]ֻ�а���j�Ͳ�����j�������
            //dp[i][j-1]������j,dp[i-j][j]�������ɸ�j 
            if(i>=j) dp[i][j]=dp[i][j-1]+dp[i-j][j]; 
            else dp[i][j]=dp[i][i]; 
        } 
    }
    printf("%d",dp[n][n]);
    return 0;
}
