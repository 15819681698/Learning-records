#include <cstdio>
#include <cstdlib>
 
#define VERTEXNUM 100 //顶点个数
typedef char VertexType;
typedef int EdgeType;
typedef enum{FALSE, TRUE} Boolean;
Boolean visited[VERTEXNUM];
 
/***************************************
 *
 * 邻接表存储结构 
 *
 * *************************************/
typedef struct node
{
	int adjvex; //顶点位置
	struct node *next; //指向下一条边的指针
}EdgeNode;
 
typedef struct vnode
{
	VertexType vertex; //顶点信息
	EdgeNode *firstedge; //指向第一条依附该顶点的边的指针
}AdjList[VERTEXNUM];
 
typedef struct
{
	AdjList vertexs; //邻接表
	int vernum, edgenum; //图中当前的顶点数和边数
}Graph;
 
/***************************************
 *
 * 建立图的邻接表
 *
 * *************************************/
void MakeGraph(Graph *graph)
{
 
	int v1, v2;
	int i, j, k;
	printf("请输入图的顶点数n和边数e:\n");
	scanf("%d%d", &graph->vernum, &graph->edgenum);
	printf("请输入顶点信息(顶点号<CR>)每个顶点以回车作为结束:\n");
 
	for(i = 0; i < graph->vernum; i++)
	{
		getchar();
		scanf("%c", &graph->vertexs[i].vertex);
		graph->vertexs[i].firstedge = NULL; //初始第一条边为空
	}
 
	printf("请输入每条边对应的两个顶点的序号(格式为i,j):\n");
	EdgeNode *p;
	for(k = 0; k < graph->edgenum; k++)
	{
		scanf("%d,%d", &i, &j);  //读入边<vi,vj>的序号
		p = (node *)malloc(sizeof(node)); //生成新的结点
		p->adjvex = j - 1;
		p->next = graph->vertexs[i - 1].firstedge;
		graph->vertexs[i - 1].firstedge = p;
	}
}
 
/***************************************
 *
 * 深度优先遍历
 *
 * *************************************/
void DFSTraverse(Graph *graph, int v)
{
	visited[v] = TRUE;
	printf("深度遍历:结点%c\n", graph->vertexs[v].vertex);
	EdgeNode *p = graph->vertexs[v].firstedge;
	while(p != NULL)
	{
		if(!visited[p->adjvex])
			DFSTraverse(graph, p->adjvex);
		p = p->next;
	}
}
 
void DFS(Graph *graph)
{
	int i;
	for(i = 0; i < graph->vernum; i++)  //当前顶点的个数 领他们没被拜访过 
		visited[i] = FALSE;
 
	for(i = 0; i < graph->vernum; i++)
		if(!visited[i])
			DFSTraverse(graph, i);
}
 
int main()
{
	Graph *graph = (Graph *)malloc(sizeof(Graph));
	MakeGraph(graph); //建立图的邻接表
	DFS(graph); //深度优先遍历
 
	return 0;
}
