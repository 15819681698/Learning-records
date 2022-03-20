#include<iostream>
#include<vector>
using namespace std;
void adjustHeap(vector<int> &arr, int i, int L);
void heapSort(vector<int> &arr) 
{
	int node = arr.size() / 2 - 1;
	for (int i = node; i >= 0; i--) //�����һ����Ҷ�ӽڵ�ĸ���㿪ʼ����
	{
		adjustHeap(arr, i, arr.size());
	}
 
	for (int L = arr.size()-1; L >= 0; L--)//L��ʾ�����ʱ�ĳ��ȣ���Ϊsize�����Ѿ������ˣ���size-1��ʼ
	{
		swap(arr[0], arr[L]);//������βԪ��,�����ֵ��������������λ�ñ���
		adjustHeap(arr, 0, L);//ȥ�����λ�õ�Ԫ�����½��ѣ��˴�L��ʾ����ĳ��ȣ����һ��λ���±��Ϊsize-2
	}
}
void adjustHeap(vector<int> &arr, int i, int L)
{
	int temp = arr[i];
	for (int k = 2 * i + 1; k < L; k = 2 * i + 1) //���ӱȽ� 
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
		if(cin.get()=='\n')  //��ȡ�س�������Ϊ�س���ʱ������ѭ�� 
		break;
	}
	heapSort(arr);
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout<<endl;
	system("pause");
	return 0;
}
