#include <iostream>
using namespace std;
int maxbit(int data[], int n) 
{
    int d = 1; //保存最大的位数
    int p = 10;
    for(int i = 0; i < n; ++i)
    {
        while(data[i] >= p)
        {
            p *= 10;
            ++d;
        }
    }
    return d;
}
void radixsort(int data[], int n) //基数排序
{
    int d = maxbit(data, n);
    int tmp[n];
    int count[10]; //计数器
    int i, j, k;
    int radix = 1;
    for(i = 1; i <= d; i++) //进行d次排序
    {
        for(j = 0; j < 10; j++)
            count[j] = 0;  //每次分配前清空计数器
        for(j = 0; j < n; j++)
        {
            k = (data[j] / radix) % 10; //统计每个桶中的记录数
            count[k]++;
        }
        for(j = 1; j < 10; j++)
            count[j] = count[j - 1] + count[j]; //将tmp中的位置依次分配给每个桶
        for(j = n - 1; j >= 0; j--) //将所有桶中记录依次收集到tmp中
        {
            k = (data[j] / radix) % 10;
            tmp[count[k] - 1] = data[j];
            count[k]--;
        }
        for(j = 0; j < n; j++) //将tmp数组复制到data中
            data[j] = tmp[j];
        radix = radix * 10;
    }
}
 
int main()
{
	int n;
	cout<<"请输入要排序数组个数：";
	cin>>n;    //输入n个数
	int array[n];  // 静态数组 
	cout<<"请输入数组："; 
	for (int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	radixsort(array,n);
	cout<<"排序后的数组：" ;
	for (int i = 0; i < n; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}
 
