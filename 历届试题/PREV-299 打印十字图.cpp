//1��ʱ�� 9*9,3��ʱ��17*17,��֪ÿ��һ�㳤�Ϳ����4
//����Ҫ��ǿ�Ĺ۲����ͼ��㼸������ 
#include<cstdio>
#include<iostream>
using namespace std;
const int maxn=9+4*28+10;
int map[maxn][maxn],n,m;
int main(){
	scanf("%d",&n);
	m=9+(n-1)*4;
	//�ȴ�ӡʮ��
	for(int i=m/2-1;i<=m/2+3;i++)
	map[m/2+1][i]=map[i][m/2+1]=1;
	for(int i=1;i<=n;i++)
	{
		//һ��һ���ӡ 
		int x=i*2+1,y=2*i;
		map[x][y]=map[x][y+1]=map[x-1][y+1]=1;//���Ͻ������� 
		y=m-i*2;
		map[x][y]=map[x][y+1]=map[x-1][y]=1;//���Ͻ������� 
		x=m-i*2;
		map[x][y]=map[x][y+1]=map[x+1][y]=1;//���½������� 
		y=2*i;
		map[x][y]=map[x][y+1]=map[x+1][y+1]=1;//���½������� 
		for(int ii=i*2+1;ii<=m-i*2;ii++)
		{
			map[ii][(i-1)*2+1]=map[(i-1)*2+1][ii]  //��Χ������ 
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
