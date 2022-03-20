#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int total=0;
int g[10][10];
int vis[0][0];
int ans=100;
void f(int i,int j,int sum,int cnt){
	if(sum>total/2) return;
	if(sum==total/2) {
		ans=min(ans,cnt);
		return;
	}
	vis[i][j]=1;
	if(i+1<n&&vis[i+1][j]==0) f(i+1,j,sum+g[i][j],cnt+1);
	if(i-1>=0&&vis[i-1][j]==0) f(i-1,j,sum+g[i][j],cnt+1);
	if(j+1<m&&vis[i][j+1]==0) f(i,j+1,sum+g[i][j],cnt+1);
	if(j-1>=0&&vis[i][j-1]==0) f(i,j-1,sum+g[i][j],cnt+1);
	vis[i][j]=0;	
}
int main()
{    cin>>m>>n;
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<m;j++){
	 		cin>>g[i][j];
	 		vis[i][j]=0;
	 		total=total+g[i][j];
		 }
	 }
	 f(0,0,0,0);
	 if(ans==100) cout<<0;
	 else cout<<ans;
	
	
 } 
