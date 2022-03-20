#include<bits/stdc++.h>
using namespace std;
// N��ʾ������M��ʾ������num��ʾ�������ϽǸ��ӵ��Ǹ���������ĸ��ӵ���С��Ŀ��sum��ʾ�������������֮��
int N, M, num = INT_MAX, sum = 0;
int A[10][10];// �����N��M������
bool visit[10][10];// ��ʾ�Ƿ񱻷��ʹ�
bool outOfBorder(int i, int j) {// �жϵ�ǰ�����Ƿ�Խ��
    if (i < 0 || i >= N || j < 0 || j >= M)
        return true;
    return false;
}
// ������ȱ���,i��j��ʾ��ǰ��������У�currentSum��ʾ��ǰ������������֮�ͣ�currentNum��ʾ��ǰ����������������
void DFS(int i, int j, int currentSum, int currentNum) {
    visit[i][j] = true;// ���ʹ��������µ�����
    currentSum += A[i][j];// ���±�����������֮��
    ++currentNum;// ���±���������������
    if (2 * currentSum >= sum) {// �����ǰ������������֮�ʹ��ڵ�����������֮�͵�һ��
        if (2 * currentSum == sum)// �����ǰ������������֮�͵�����������֮�͵�һ��
            num = min(currentNum, num);// ���°������ϽǸ��ӵ��Ǹ���������ĸ��ӵ���С��Ŀ
        visit[i][j] = false;
        return;// ���ݵ���һ���
    }
    if (!outOfBorder(i, j + 1) && !visit[i][j + 1])// �����ƶ�
        DFS(i, j + 1, currentSum, currentNum);
    if (!outOfBorder(i + 1, j) && !visit[i + 1][j])// �����ƶ�
        DFS(i + 1, j, currentSum, currentNum);
    if (!outOfBorder(i, j - 1) && !visit[i][j - 1])// �����ƶ�
        DFS(i, j - 1, currentSum, currentNum);
    if (!outOfBorder(i - 1, j) && !visit[i - 1][j])// �����ƶ�
        DFS(i - 1, j, currentSum, currentNum);
    visit[i][j] = false;
}
int main(){
    scanf("%d%d",&M,&N);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            scanf("%d",&A[i][j]);
            sum += A[i][j];
        }
    DFS(0,0,0,0);
    if (num == INT_MAX)// numû�б仯����˵��û�з���Ҫ��ļ���
        printf("0");// ���0
    else
        printf("%d",num);
    return 0;
}
