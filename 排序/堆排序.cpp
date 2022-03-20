#include<iostream>
#include<vector>
using namespace std;
void adjustHeap(vector<int> &arr, int i, int L);
void heapSort(vector<int> &arr) 
{
	int node = arr.size() / 2 - 1;
	for (int i = node; i >= 0; i--) //从最后一个非叶子节点的父结点开始建堆
	{
		adjustHeap(arr, i, arr.size());
	}
 
	for (int L = arr.size()-1; L >= 0; L--)//L表示数组此时的长度，因为size长度已经建过了，从size-1开始
	{
		swap(arr[0], arr[L]);//交换首尾元素,将最大值交换到数组的最后位置保存
		adjustHeap(arr, 0, L);//去除最后位置的元素重新建堆，此处L表示数组的长度，最后一个位置下标变为size-2
	}
}
void adjustHeap(vector<int> &arr, int i, int L)
{
	int temp = arr[i];
	for (int k = 2 * i + 1; k < L; k = 2 * i + 1) //父子比较 
	{
		if ((k+1 < L)&&arr[k] < arr[k + 1])
		{
			k++;
		}
		if (temp < arr[k])
		{
			arr[i] = arr[k];
			i = k;
		}
		else
			break;
	}
	arr[i] = temp;
}
int main() {
	int num;
	vector<int> arr;
	while (cin>>num){
		arr.push_back(num);
		if(cin.get()=='\n')  //读取回车键，当为回车键时，跳出循环 
		break;
	}
	heapSort(arr);
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout<<endl;
	system("pause");
	return 0;
}
