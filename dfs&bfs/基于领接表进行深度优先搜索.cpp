#include <cstdio>
#include <cstdlib>
 
#define VERTEXNUM 100 //�������
typedef char VertexType;
typedef int EdgeType;
typedef enum{FALSE, TRUE} Boolean;
Boolean visited[VERTEXNUM];
 
/***************************************
 *
 * �ڽӱ�洢�ṹ 
 *
 * *************************************/
typedef struct node
{
	int adjvex; //����λ��
	struct node *next; //ָ����һ���ߵ�ָ��
}EdgeNode;
 
typedef struct vnode
{
	VertexType vertex; //������Ϣ
	EdgeNode *firstedge; //ָ���һ�������ö���ıߵ�ָ��
}AdjList[VERTEXNUM];
 
typedef struct
{
	AdjList vertexs; //�ڽӱ�
	int vernum, edgenum; //ͼ�е�ǰ�Ķ������ͱ���
}Graph;
 
/***************************************
 *
 * ����ͼ���ڽӱ�
 *
 * *************************************/
void MakeGraph(Graph *graph)
{
 
	int v1, v2;
	int i, j, k;
	printf("������ͼ�Ķ�����n�ͱ���e:\n");
	scanf("%d%d", &graph->vernum, &graph->edgenum);
	printf("�����붥����Ϣ(�����<CR>)ÿ�������Իس���Ϊ����:\n");
 
	for(i = 0; i < graph->vernum; i++)
	{
		getchar();
		scanf("%c", &graph->vertexs[i].vertex);
		graph->vertexs[i].firstedge = NULL; //��ʼ��һ����Ϊ��
	}
 
	printf("������ÿ���߶�Ӧ��������������(��ʽΪi,j):\n");
	EdgeNode *p;
	for(k = 0; k < graph->edgenum; k++)
	{
		scanf("%d,%d", &i, &j);  //�����<vi,vj>�����
		p = (node *)malloc(sizeof(node)); //�����µĽ��
		p->adjvex = j - 1;
		p->next = graph->vertexs[i - 1].firstedge;
		graph->vertexs[i - 1].firstedge = p;
	}
}
 
/***************************************
 *
 * ������ȱ���
 *
 * *************************************/
void DFSTraverse(Graph *graph, int v)
{
	visited[v] = TRUE;
	printf("��ȱ���:���%c\n", graph->vertexs[v].vertex);
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
	for(i = 0; i < graph->vernum; i++)  //��ǰ����ĸ��� ������û���ݷù� 
		visited[i] = FALSE;
 
	for(i = 0; i < graph->vernum; i++)
		if(!visited[i])
			DFSTraverse(graph, i);
}
 
int main()
{
	Graph *graph = (Graph *)malloc(sizeof(Graph));
	MakeGraph(graph); //����ͼ���ڽӱ�
	DFS(graph); //������ȱ���
 
	return 0;
}
