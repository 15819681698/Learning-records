#include <iostream>
using namespace std;
int maxbit(int data[], int n) 
{
    int d = 1; //��������λ��
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
void radixsort(int data[], int n) //��������
{
    int d = maxbit(data, n);
    int tmp[n];
    int count[10]; //������
    int i, j, k;
    int radix = 1;
    for(i = 1; i <= d; i++) //����d������
    {
        for(j = 0; j < 10; j++)
            count[j] = 0;  //ÿ�η���ǰ��ռ�����
        for(j = 0; j < n; j++)
        {
            k = (data[j] / radix) % 10; //ͳ��ÿ��Ͱ�еļ�¼��
            count[k]++;
        }
        for(j = 1; j < 10; j++)
            count[j] = count[j - 1] + count[j]; //��tmp�е�λ�����η����ÿ��Ͱ
        for(j = n - 1; j >= 0; j--) //������Ͱ�м�¼�����ռ���tmp��
        {
            k = (data[j] / radix) % 10;
            tmp[count[k] - 1] = data[j];
            count[k]--;
        }
        for(j = 0; j < n; j++) //��tmp���鸴�Ƶ�data��
            data[j] = tmp[j];
        radix = radix * 10;
    }
}
 
int main()
{
	int n;
	cout<<"������Ҫ�������������";
	cin>>n;    //����n����
	int array[n];  // ��̬���� 
	cout<<"���������飺"; 
	for (int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	radixsort(array,n);
	cout<<"���������飺" ;
	for (int i = 0; i < n; ++i)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}
 
