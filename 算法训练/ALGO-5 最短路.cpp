#include <iostream>
#include<string.h>
#include<queue> 
using namespace std;
struct edge
{
	int to,val,next;
}e[200100];//e[i].to,e[i].val,e[i].next分别表示第i条边的终点，权值，和另（上）一条于此边相同起点的边的编号
int m,n,head[21000],dis[21000];//head[i]表示当前以i为起点的边的编号，dis[i]表示1号点到i号点的距离
 
void add(int from,int to,int val,int len)//添加边，参数分别代表此边的起点，终点，权值，还有此边的编号
{
	e[len].to=to;
	e[len].val=val;
	e[len].next=head[from];//此边的起点是from，而head[from]保存上一条起点是from的边的编号
	head[from]=len;//添加了这条边后，现在，最新的以from为起点的边编号就是len
}
 
void spfa()    //贝尔曼-福特算法的队列优化形式 
{
	int s;
	queue <int> q;
	int visit[21000];//visit[i]==0代表第i点不在队列中，visit[i]==1代表已在队列中
	for(int i=1;i<=n;i++)
		{
			dis[i]=99999999;
		}//将权值初始化为最大值
	memset(visit,0,sizeof(visit));//初始没有点在队列中
	dis[1]=0;
	q.push(1);
	visit[1]=1;//现在把第一个点扔进队列
	while(!q.empty())//如果队列不空则重复执行以下操作
	{
		int t=q.front();//取队列的第一个元素
		q.pop();
		visit[t]=0;//t现在不在队列里
		for(int i=head[t];i!=-1;i=e[i].next)//枚举所有以t为起点的边
		{
			s=e[i].to;//s为所枚举的边的终点
			if(dis[s]>dis[t]+e[i].val)//尝试松弛s点
			{
				dis[s]=dis[t]+e[i].val;
			    if(visit[s]==0)
			    {
				 q.push(s);
			     	visit[s]=1;
			    }//如果成功松弛了s点，把s点扔进队列
			}
		}
	}
	
}
 
int main ()
{
	cin>>n>>m;
	int from,val,to;
	int len=1;
	memset (head,-1,sizeof(head));
	for(int i=0;i<m;i++)
	{
		cin>>from>>to>>val;
		add(from,to,val,len);
		len++;
	}
	spfa();
	for(int i=2;i<=n;i++)
	{
		cout<<dis[i]<<endl;
	}
}

