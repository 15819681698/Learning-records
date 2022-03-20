#include <iostream>
using namespace std;

void shellSort(int *a,int n) //希尔排序
{
    int key,j;
    for(int step=n/2;step>0;step/=2) //将数组按照step分组，不断二分到每组增量只剩下一个元素
    {
        for(int i=step;i<n;i++) //将每组中的元素排序，小的在前面
        {
            key=a[i];
            for(j=i-step;j>=0 && key<a[j];j-=step)
            {
                a[j+step]=a[j];
            }
            a[j+step]=key; //和上面的for循环一起，将组中小的元素换到数组的前面
        }
    }
}

int main()
{
    int a[10] = {43, 65, 4, 23, 6, 98, 2, 65, 7, 79};
    cout<<"希尔排序："<<endl;
    shellSort(a, 10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

