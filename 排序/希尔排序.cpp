#include <iostream>
using namespace std;

void shellSort(int *a,int n) //ϣ������
{
    int key,j;
    for(int step=n/2;step>0;step/=2) //�����鰴��step���飬���϶��ֵ�ÿ������ֻʣ��һ��Ԫ��
    {
        for(int i=step;i<n;i++) //��ÿ���е�Ԫ������С����ǰ��
        {
            key=a[i];
            for(j=i-step;j>=0 && key<a[j];j-=step)
            {
                a[j+step]=a[j];
            }
            a[j+step]=key; //�������forѭ��һ�𣬽�����С��Ԫ�ػ��������ǰ��
        }
    }
}

int main()
{
    int a[10] = {43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    cout<<"ϣ������"<<endl;
    shellSort(a, 10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

