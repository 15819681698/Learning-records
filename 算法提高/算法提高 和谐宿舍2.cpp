#include<iostream>
#include<algorithm>
using namespace std;

const int N=110;
int n,m; 
int h[N];
int f[N][N];
int maxh[N][N];
 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>h[i];
	
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
		{
			int s=0;
			for(int k=i;k<=j;k++) s=max(s,h[k]);
			maxh[i][j]=s;
		}
	for(int i=1;i<=n;i++)
		for(int k=1;k<=m&&k<=i;k++)
		{
			if(k==1) f[i][k]=i*maxh[1][i];
			else if(k==i)
			{
				int sum=0;
				for(int u=1;u<=i;u++) sum+=h[u];
				f[i][k]=sum;
			}
			else
			{
				f[i][k]=0x3f3f3f3f;
				for(int u=i;u>=k;u--)
				{
					f[i][k]=min(f[i][k],f[u-1][k-1]+maxh[u][i]*(i-u+1));
				}
			}
		}
	int ans=0x3f3f3f3f;
	for(int i=1;i<=m;i++)
		ans=min(ans,f[n][i]);
	
	cout<<ans;
}
