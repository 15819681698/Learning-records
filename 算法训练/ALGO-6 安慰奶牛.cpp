#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f//注释：0x3f3f3f3f的十进制是1061109567，而一般场合下的数据都是小于10^9的，所以它可以作为无穷大使用而不致出现数据大于无穷大的情形。 
#define MAXN 100005
#define Mod 10001
using namespace std;
struct node
{
    int x,y,w;//牧场S，牧场E，通过时间L 
};
node edge[MAXN];
bool cmp(node a,node b)
{
    return a.w<b.w;
}
int n,m,father[MAXN];//father数组存放顶点编号 
int c[MAXN];         //c数组存放在每一顶点的交谈时间 
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
        edge[i].w=2*edge[i].w+c[edge[i].x]+c[edge[i].y];//edge[i].w表示为从一个结点到另一个结点再返回所用时间（包括谈话时间）
     }
    sort(edge+1,edge+1+m,cmp);//edge数组按w大小从小到大排序     以下用Kruskal算法
    int ans=minx;             //选择谈话时间最少的地方睡觉
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
