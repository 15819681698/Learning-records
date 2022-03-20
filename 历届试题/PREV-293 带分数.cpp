#include<iostream>
#include<algorithm>
using namespace std;
int number[9];//储存1~9这9个数字的排列
int compute(int left, int right) {//计算数组number的[left,right]区间所表示的数的值
    int a = 0;
    for (int i = left; i <= right; ++i)
        a = a * 10 + number[i];
    return a;
}
int main()
{
    for(int i=0;i<9;++i)
        number[i]=i+1;
    int N,ans=0;
    cin>>N;
    do{
        for (int i = 0; i < 7; ++i)//分割带分数的整数部分
            for (int j = i + 1; j < 8; ++j) {//分割带分数的分子分母
                int a = compute(0, i), b = compute(i + 1, j), c = compute(j + 1, 8);//计算带分数的整数、分子、分母的值
                if (b % c != 0 || a + b / c != N)//分子不能整除分母或者当前带分数值不等于N
                    continue;//重新进行循环
                ++ans;//递增种类数
            }
    }while(next_permutation(number,number+9));  //对1~9进行全排列 
    cout<<ans;
}
