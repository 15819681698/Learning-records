#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
bool judge(int n)              // 判断是否为排它平方数 
{
    int num = n;
    bool vis[10];              // vis用判断是否有这个数 
    memset(vis, false, sizeof(vis));
    while(num)
    {
        int tmp = num % 10;    //求余，得出每一个位置的数字 
        num /= 10;
        if(vis[tmp])           // 该位置的数字已经有就返回false 
            return false;
        vis[tmp] = true;
    }
    long long n1 = (long long)n * n;
    while(n1)
    {
        int tmp = n1 % 10;		// 求余，得出每一个位置的数字 
        n1 /= 10;
        if(vis[tmp])		   // 该位置的数字已经有就返回false 
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


