#include <vector>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct BitNode
{
    int data;
    BitNode *left, *right;
    BitNode(int x) :data(x), left(0), right(0){} //���� 
};

void Create(BitNode *&root)  // ���������� 
{
    int key;
    cin >> key;
    if (key == -1)
        root = NULL;
    else
    {
        root = new BitNode(key);
        Create(root->left);
        Create(root->right);
    }
}

void PreOrderTraversal(BitNode *root) //ǰ����� 
{
    if (root)
    {
        cout << root->data << " ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

//�����������
//����ջ���ֽ�������ѹջ�ٽ�������ѹջ
void DepthFirstSearch(BitNode *root)
{
    stack<BitNode*> nodeStack;
    nodeStack.push(root);
    while (!nodeStack.empty())
    {
        BitNode *node = nodeStack.top();
        cout << node->data << ' ';
        nodeStack.pop();
        if (node->right)
        {
            nodeStack.push(node->right);
        }
        if (node->left)
        {
            nodeStack.push(node->left);
        }
    }
}

//�����������
//���ö��� 
void BreadthFirstSearch(BitNode *root)
{
    queue<BitNode*> nodeQueue;
    nodeQueue.push(root);
    while (!nodeQueue.empty())
    {
        BitNode *node = nodeQueue.front();
        cout << node->data << ' ';
        nodeQueue.pop();
        if (node->left)
        {
            nodeQueue.push(node->left);
        }
        if (node->right)
        {
            nodeQueue.push(node->right);
        }
    }
}

int  main()
{
    BitNode *root = NULL;
    Create(root);
    //ǰ�����
    PreOrderTraversal(root);
    //������ȱ���
    cout << endl << "dfs" << endl;
    DepthFirstSearch(root);
    //�����������
    cout << endl << "bfs" << endl;
    BreadthFirstSearch(root);
}
