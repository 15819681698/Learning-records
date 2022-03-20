#include <iostream>
#include <vector>
using namespace std;
 
void merge(vector<int> &arr,int L,int mid,int R)
{
	int *help = new int(R-L+1);  // ������ 
	int p1=L,p2=mid+1,i=0;  // 3��ָ�� 
	while(p1<=mid && p2<=R)
	{
		help[i++] = arr[p1]>arr[p2] ? arr[p2++] : arr[p1++];
	}
	while(p1<=mid)
		help[i++] = arr[p1++];
	while(p2<=R)
		help[i++] = arr[p2++];
 
	for (int i=0;i<R-L+1;i++)  // ��help���鸴�� arr���� 
	{
		arr[L+i] = help[i];
	}
}
void sortprocess(vector<int> &arr,int L,int R)
{
	if (L < R)
	{
		int mid = L + ((R-L)>>2);  //  (L+R)/2
		sortprocess(arr,L,mid);    
		sortprocess(arr,mid+1,R);
		merge(arr,L,mid,R);
	}
}
void MergeSort(vector<int> &arr,int L,int R)  
{
	if (arr.size()<2)
		return;
	sortprocess(arr,L,R);
}
int main()
{
	vector<int> arr;  // ��̬���� 
	int n,temp;
	cout<<"������Ҫ�������������";
	cin>>n;  //����n����
	cout<<"���������飺"; 
	for (int i=0;i<n;i++)
	{
		cin>>temp;  //��������
		arr.push_back(temp);
	}
	MergeSort(arr,0,arr.size()-1);  //�鲢���� 
 	cout<<"���������飺" ;
	for(int i=0;i<arr.size();i++)
		cout<<arr[i]<<" ";
	cout<<endl;
 
	return 0;
 
}
