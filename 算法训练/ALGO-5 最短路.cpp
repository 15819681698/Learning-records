#include <iostream>
#include<string.h>
#include<queue> 
using namespace std;
struct edge
{
	int to,val,next;
}e[200100];//e[i].to,e[i].val,e[i].next�ֱ��ʾ��i���ߵ��յ㣬Ȩֵ�������ϣ�һ���ڴ˱���ͬ���ıߵı��
int m,n,head[21000],dis[21000];//head[i]��ʾ��ǰ��iΪ���ıߵı�ţ�dis[i]��ʾ1�ŵ㵽i�ŵ�ľ���
 
void add(int from,int to,int val,int len)//��ӱߣ������ֱ����˱ߵ���㣬�յ㣬Ȩֵ�����д˱ߵı��
{
	e[len].to=to;
	e[len].val=val;
	e[len].next=head[from];//�˱ߵ������from����head[from]������һ�������from�ıߵı��
	head[from]=len;//����������ߺ����ڣ����µ���fromΪ���ı߱�ž���len
}
 
void spfa()    //������-�����㷨�Ķ����Ż���ʽ 
{
	int s;
	queue <int> q;
	int visit[21000];//visit[i]==0�����i�㲻�ڶ����У�visit[i]==1�������ڶ�����
	for(int i=1;i<=n;i++)
		{
			dis[i]=99999999;
		}//��Ȩֵ��ʼ��Ϊ���ֵ
	memset(visit,0,sizeof(visit));//��ʼû�е��ڶ�����
	dis[1]=0;
	q.push(1);
	visit[1]=1;//���ڰѵ�һ�����ӽ�����
	while(!q.empty())//������в������ظ�ִ�����²���
	{
		int t=q.front();//ȡ���еĵ�һ��Ԫ��
		q.pop();
		visit[t]=0;//t���ڲ��ڶ�����
		for(int i=head[t];i!=-1;i=e[i].next)//ö��������tΪ���ı�
		{
			s=e[i].to;//sΪ��ö�ٵıߵ��յ�
			if(dis[s]>dis[t]+e[i].val)//�����ɳ�s��
			{
				dis[s]=dis[t]+e[i].val;
			    if(visit[s]==0)
			    {
				 q.push(s);
			     	visit[s]=1;
			    }//����ɹ��ɳ���s�㣬��s���ӽ�����
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

