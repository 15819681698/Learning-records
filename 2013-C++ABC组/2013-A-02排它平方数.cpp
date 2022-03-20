#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool judge(int n)              // �ж��Ƿ�Ϊ����ƽ���� 
{
    int num = n;
    bool vis[10];              // vis���ж��Ƿ�������� 
    memset(vis, false, sizeof(vis));
    while(num)
    {
        int tmp = num % 10;    //���࣬�ó�ÿһ��λ�õ����� 
        num /= 10;
        if(vis[tmp])           // ��λ�õ������Ѿ��оͷ���false 
            return false;
        vis[tmp] = true;
    }
    long long n1 = (long long)n * n;
    while(n1)
    {
        int tmp = n1 % 10;		// ���࣬�ó�ÿһ��λ�õ����� 
        n1 /= 10;
        if(vis[tmp])		   // ��λ�õ������Ѿ��оͷ���false 
            return false;
    }
    return true;
}

int main()
{
    for(int i = 123456; i <= 987654; ++i)
        if(judge(i))
            cout << i << endl;    
    return 0;
}


