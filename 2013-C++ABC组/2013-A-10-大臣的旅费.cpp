#include<iostream>
#include <vector>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
int ans=0;
int pnt=-1;
struct point{
public:	
	int num,cost;
};
void dfs(vector<point> m[],int vis[],int start,int dis){
	vis[start]=0; 
	bool isleaf=true;
	for(int k=0;k<m[start].size();k++){
		 if(vis[m[start][k].num]==-1){
		 isleaf=false;
		 dfs(m,vis,m[start][k].num,dis+m[start][k].cost);
	     }
	}
	vis[start]=-1;
	if(isleaf){
		if(dis>ans){
			ans=dis;
			pnt=start;
		}
	}
}
int main(){	 
	 int i,j;
	 cin>>n;
	 vector<point>m[n+1];
	 int vis[n+1];
	 memset(vis,-1,sizeof(vis));
	 for(i=0;i<n-1;i++){
	     int p,q,d;
		   cin>>p>>q>>d;
		   point p1 ;
		   point p2 ;
		   p1.num=q,p1.cost=d;
		   p2.num=p,p2.cost=d;
		   m[p].push_back(p1);
		   m[q].push_back(p2);
		 }
		dfs(m,vis,1,0);
		ans=0;
		dfs(m,vis,pnt,0); 
		int anx=((21+ans)*ans)/2;
	cout<<anx;
 } 
