#include <vector>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct BitNode
{
    int data;
    BitNode *left, *right;
    BitNode(int x) :data(x), left(0), right(0){} //函数 
};

void Create(BitNode *&root)  // 创建二叉树 
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

void PreOrderTraversal(BitNode *root) //前序遍历 
{
    if (root)
    {
        cout << root->data << " ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

//深度优先搜索
//利用栈，现将右子树压栈再将左子树压栈
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

//广度优先搜索
//利用队列 
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
    //前序遍历
    PreOrderTraversal(root);
    //深度优先遍历
    cout << endl << "dfs" << endl;
    DepthFirstSearch(root);
    //广度优先搜索
    cout << endl << "bfs" << endl;
    BreadthFirstSearch(root);
}
