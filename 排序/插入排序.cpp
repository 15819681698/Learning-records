#include <iostream>
using namespace std;

void bInsertSort(int a[],int n) //插入排序
{
    int low,high,mid;
    int temp;
    for(int i=1;i<n;i++)
    {
        low=0;
        //把a[i]元素插入到它的前面a[0--(i-1)]中
        temp=a[i];
        high=i-1;
        while(low<=high) //该while是折半优化算法，缩小a[i]的范围
        {
            mid=(low+high)/2;
            if(a[mid]>temp)
                high=mid-1;
            else
                low=mid+1;
        }
        int j=i;
        while((j>low)&&(a[j-1]>temp)) //让a与已经排好的数组的各元素比较，小的放前面
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
    cout<<"插入排序："<<endl;
    bInsertSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
