#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BucketSort(int vec[], int max)
{
	int len = 10;
	vector<int> tmp(max + 1, 0);
	for (int i = 0; i < len; ++i)   //����Ԫ��ֵ����Ͱ��Ӧ����λ�õ����ݼ�1
	{
		tmp[vec[i]]++;
	}
	int index = 0;
	for (int j = 0; j < max + 1; ++j)  //��Ͱ�е���������ȡ����
	{
		for (int k = 1; k <= tmp[j]; ++k)
		{
			vec[index++] = j;
		}
	}
	
}
int main()
{
 	int vecOrigin[10]= { 1, 55, 88, 3, 45, 69, 52, 1, 0, 45 };
 	int max = vecOrigin[0];
 	for(int i=1;i<10;i++)
 	{
 		if(max<vecOrigin[i]) max=vecOrigin[i];
	 }
	BucketSort(vecOrigin, max);
	for (int i=0; i<10; i++)
	{
		cout << vecOrigin[i]<< " ";
	}
	system("pause");
	return 0;
}
