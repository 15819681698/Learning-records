#include<iostream>
#include<algorithm> 
#include<cstring>
using namespace std;
const int MOD = 1000000007;
int n,m,k;
int a[50][50];
int c[50][50][14][13];  // �������鷽�� ��������ü�������ᳬʱ 

long long dfs(int x,int y,int max,int cnt)
{
	if(c[x][y][max+1][cnt]!=-1) return c[x][y][max+1][cnt];  
	long long ans = 0;
	int t=a[x][y];
	if(x==n||y==m||cnt>k) return 0; //cnt>kҲҪ���� 
	if(x==n-1&&y==m-1){
		if(cnt==k||( cnt==k-1 && t>max))
		{
			ans++;
			if(ans>MOD) ans%=MOD;
		}
		return ans;
	} 
	if(t > max){  // ��ǰ��Ĵ�ѡ��ȡ 
		ans+=dfs(x+1,y,t,cnt+1);  
		ans+=dfs(x,y+1,t,cnt+1);
	}
	// С�ڻ���ڣ�����ȡ����� 
	ans+=dfs(x+1,y,max,cnt);
	ans+=dfs(x,y+1,max,cnt);
	
	c[x][y][max+1][cnt] = ans%MOD;  //��¼һ�� 
	
	return ans%MOD; 
}

int main()
{
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) 
			cin>>a[i][j];
	memset(c,-1,sizeof(c)); // ����������ȫ��ֵȡΪ-1
	cout<<dfs(0,0,-1,0);
	return 0;	
 } 
