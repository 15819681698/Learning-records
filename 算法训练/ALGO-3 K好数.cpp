#include<iostream>
#include<cmath>
using namespace std;
int dp[1000][1000];
const int MOD=1000000007;
int main()
{
	int sum=0;
	int CountK(int,int,int);
	int K,L;
	cin>>K>>L;
	if(K==1&&L==1)	//�����1λ1���Ƶĸ���Ϊɶ����1��ʾ����� 
		cout<<0<<endl;
	else if(K>1&&L==1)//1λ��K���Ƶ�K������������K�� 
		cout<<K<<endl;
	else if(L>1)
	cout<<CountK(L,K,sum)<<endl;
	return 0;
}
int CountK(int length,int range,int sum)
{
	for(int i=1;i<range;i++)
	{
		dp[0][i]=1;
	}
	for(int i=1;i<length;i++)
	{
		for(int j=0;j<range;j++)
		{
			for(int k=0;k<range;k++)
			{
				if(abs(j-k)!=1)
				{
					if((j-1)==0&&k==0)//�ų���λΪ0�����
						continue;
					dp[i][j]=dp[i][j]+dp[i-1][k];
					dp[i][j]%=MOD;
				}
			}
		}
	}
	for(int i=0;i<range;i++)
	{
		sum+=dp[length-1][i];
		sum%=MOD;
	}
	return sum;
}

