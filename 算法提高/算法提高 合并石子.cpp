#include<iostream>
#define INF 0x3f3f3f3f
using namespace std;
int m[1001][1001];//m[i][j]=min{m[i][k]+m[k+1][j]}+sum[j]-sum[i-1];i为起点,j为终点
int s[1001][1001];//s[i][j]保存当m[i][j]最少时的分界点k值
int a[1001],sum[1001];
int main()
{
	int n,i,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
			sum[i]=a[i];
		else
			sum[i]=sum[i-1]+a[i];
	}
	int st,ed;
	for(i=0;i<n;i++)
	{
		for(st=0;st<n-i;st++)
		{
			ed=st+i;
			m[st][ed]=INF;
			if(i==0)
			{
				m[st][ed]=0;
				s[st][ed]=st;
			}
			else
			{
				for(k=s[st][ed-1];k<=s[st+1][ed];k++)
				{
					if(m[st][ed]>m[st][k]+m[k+1][ed])
					{
						m[st][ed]=m[st][k]+m[k+1][ed];
						s[st][ed]=k;
					}
				}
				m[st][ed]=m[st][ed]+sum[ed]-sum[st-1];
			}
		}
	}
	cout<<m[0][n-1]<<endl;
	return 0;
}
