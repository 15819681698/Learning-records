#include<iostream>
#include<algorithm>
using namespace std;
int number[9];//����1~9��9�����ֵ�����
int compute(int left, int right) {//��������number��[left,right]��������ʾ������ֵ
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
        for (int i = 0; i < 7; ++i)//�ָ����������������
            for (int j = i + 1; j < 8; ++j) {//�ָ�������ķ��ӷ�ĸ
                int a = compute(0, i), b = compute(i + 1, j), c = compute(j + 1, 8);//��������������������ӡ���ĸ��ֵ
                if (b % c != 0 || a + b / c != N)//���Ӳ���������ĸ���ߵ�ǰ������ֵ������N
                    continue;//���½���ѭ��
                ++ans;//����������
            }
    }while(next_permutation(number,number+9));  //��1~9����ȫ���� 
    cout<<ans;
}
