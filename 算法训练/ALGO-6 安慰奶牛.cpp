#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f//ע�ͣ�0x3f3f3f3f��ʮ������1061109567����һ�㳡���µ����ݶ���С��10^9�ģ�������������Ϊ�����ʹ�ö����³������ݴ������������Ρ� 
#define MAXN 100005
#define Mod 10001
using namespace std;
struct node
{
    int x,y,w;//����S������E��ͨ��ʱ��L 
};
node edge[MAXN];
bool cmp(node a,node b)
{
    return a.w<b.w;
}
int n,m,father[MAXN];//father�����Ŷ����� 
int c[MAXN];         //c��������ÿһ����Ľ�̸ʱ�� 
int main()
{
    cin>>n>>m;
    int minx=INF;
    for(int i=1; i<=n; ++i)
     {
        cin>>c[i];
        minx=min(c[i],minx);
        father[i]=i;
     }
    for(int i=1;i<=m;++i)
     {
        cin>>edge[i].x>>edge[i].y>>edge[i].w;
        edge[i].w=2*edge[i].w+c[edge[i].x]+c[edge[i].y];//edge[i].w��ʾΪ��һ����㵽��һ������ٷ�������ʱ�䣨����̸��ʱ�䣩
     }
    sort(edge+1,edge+1+m,cmp);//edge���鰴w��С��С��������     ������Kruskal�㷨
    int ans=minx;             //ѡ��̸��ʱ�����ٵĵط�˯��
    for(int i=1;i<=m;++i)
     {
         int s1=father[edge[i].x];
         int s2=father[edge[i].y];
         if(s1!=s2)
         {
             ans+=edge[i].w;
             father[s2]=s1;
             for(int j=1;j<=n;++j)
                 if(father[j]==s2)
                     father[j]=s1;
         } 
    }
    cout<<ans;
    return 0;
}
