#include <iostream>
using namespace std;

void bInsertSort(int a[],int n) //��������
{
    int low,high,mid;
    int temp;
    for(int i=1;i<n;i++)
    {
        low=0;
        //��a[i]Ԫ�ز��뵽����ǰ��a[0--(i-1)]��
        temp=a[i];
        high=i-1;
        while(low<=high) //��while���۰��Ż��㷨����Сa[i]�ķ�Χ
        {
            mid=(low+high)/2;
            if(a[mid]>temp)
                high=mid-1;
            else
                low=mid+1;
        }
        int j=i;
        while((j>low)&&(a[j-1]>temp)) //��a���Ѿ��źõ�����ĸ�Ԫ�رȽϣ�С�ķ�ǰ��
        {
            a[j]=a[j-1];
            --j;
        }
        a[low]=temp;
    }
}

int main()
{
    int a[10] = {43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    cout<<"��������"<<endl;
    bInsertSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
