//1层时是 9*9,3层时是17*17,可知每加一层长和宽各加4
//这需要很强的观察力和计算几何能力 
#include<cstdio>
#include<iostream>
using namespace std;
const int maxn=9+4*28+10;
int map[maxn][maxn],n,m;
int main(){
	scanf("%d",&n);
	m=9+(n-1)*4;
	//先打印十字
	for(int i=m/2-1;i<=m/2+3;i++)
	map[m/2+1][i]=map[i][m/2+1]=1;
	for(int i=1;i<=n;i++)
	{
		//一层一层打印 
		int x=i*2+1,y=2*i;
		map[x][y]=map[x][y+1]=map[x-1][y+1]=1;//左上角三个格 
		y=m-i*2;
		map[x][y]=map[x][y+1]=map[x-1][y]=1;//右上角三个格 
		x=m-i*2;
		map[x][y]=map[x][y+1]=map[x+1][y]=1;//左下角三个格 
		y=2*i;
		map[x][y]=map[x][y+1]=map[x+1][y+1]=1;//右下角三个格 
		for(int ii=i*2+1;ii<=m-i*2;ii++)
		{
			map[ii][(i-1)*2+1]=map[(i-1)*2+1][ii]  //边围四条线 
			=map[m-(i-1)*2][ii]=map[ii][m-(i-1)*2]=1;
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		if(map[i][j]) printf("$");
		else printf(".");
		puts("");
	}
	return 0;
}
