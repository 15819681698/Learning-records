#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int N,M,Q;
const int MaxM=2*10^5;
const int MaxN=50001;
// �ߵĳ��� 
struct Edge{
	int from,to,cost;
	Edge(int from,int to,int cost ){
		this->from=from;
		this->to=to;
		this->cost=cost;
	}
}; 
Edge* edges[MaxM];
//����ȽϺ���
bool cmp(Edge *e1,Edge *e2){  
	return e1->cost<e2->cost;
}
// ���鼯
struct UFNode{
	UFNode *parent;
	UFNode():parent(NULL){}
};
UFNode ufnodes[MaxN];
// ���鼯�Ĳ��Һ��� 
UFNode* find(UFNode* p){
	if(p->parent==NULL) return p; //û�����Ƚڵ� 
	set<UFNode*>path;//��¼ 
	while(p->parent!=NULL){
		path.insert(p);
		p=p->parent;
	}
	set<UFNode*>::iterator iter = path.begin();
	while(iter!=path.end()){
		(*iter)->parent=p;
		iter++;
	}
	return p;
}
// ���鼯�ĺϲ����� 
void merge(UFNode* p1,UFNode* p2){
	find(p2)->parent=find(p1);
}
// 
void easy(int l,int r,int mod,int c){
	
	for(int j=0;j<=N;j++){
		ufnodes[j].parent=NULL; 
	}
	// ��С������ 
	for(int i=0;i<M;i++){
		Edge *pEdge=edges[i];
		int from=pEdge->from;
		int to=pEdge->to;
		int cost=pEdge->cost;
		
		if(find(&ufnodes[from])==find(&ufnodes[to])) 
			continue;
		else
			merge(&ufnodes[from],&ufnodes[to]);
		
		UFNode* parent=NULL; 
		bool isOK=true;
		for(int i=l;i<=r;i++){
			if(i%mod==c){
				if(parent==NULL)
					parent=find(&ufnodes[i]);
				else 
					if(parent!=find(&ufnodes[i]))
					{
						isOK=false;
						break;
					 } 
					}
		} 
		if(isOK)
		{
			cout<<cost<<endl;
			break;
		}
	}
} 
int main()
{
	cin>>N>>M>>Q;
	for(int i=0;i<M;i++){
		int a,b,c;
		cin>>a>>b>>c;
		Edge *e=new Edge(a,b,c); 
		edges[i]=e;
	} 
	// ���ձߵĴ�С��С�������� 
	sort(edges,edges+M,cmp); 
	for(int i=0;i<Q;i++){
		int l,r,mod,c;
		cin>>l>>r>>mod>>c;
		easy(l,r,mod,c);
	}
 } 
