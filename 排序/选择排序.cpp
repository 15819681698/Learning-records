#include <iostream>
using namespace std;

void SelectSort(int a[],int n) //ѡ������
{
    int mix,temp;
    for(int i=0;i<n-1;i++) //ÿ��ѭ�����飬�ҳ���С��Ԫ�أ�����ǰ�棬ǰ��ļ�Ϊ����õ�
    {
        mix=i; //������СԪ�ص��±�
        for(int j=i+1;j<n;j++) //������������СԪ��������Ƚϣ���������С��Ԫ�ص��±�
            if(a[j]<a[mix])
                mix=j;
        //������������бȼ����Ԫ�ػ�С���ͽ���
        if(i!=mix)
        {
            temp=a[i];
            a[i]=a[mix];
            a[mix]=temp;
        }
    }
}



int main()
{
    int a[10] = {43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    cout<<"ѡ������"<<endl;
    SelectSort(a, 10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
