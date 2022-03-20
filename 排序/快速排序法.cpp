#include<iostream>
using namespace std;
void qsort(int, int);
int a[101];

int main()
{	int n;
	cin>>n;
	for(int i=0;i<n;i++)
     {cin>>a[i];}
	qsort(0,n-1);
	for(int i=0;i<n;i++)
	{cout<<a[i]<<" ";}
	return 0;
}

void qsort(int l,int r)			//����֮��ָ���������i��j��mid�� 
{   int mid, p;   // mid���м�ֵ  
    int j, i;     //i����� j���ұ�  
    i = l;
    j = r;
    mid = a[(l + r) / 2];  //ȡ�м��һ����  
    do
    { while (a[i] < mid)   //���ָ���������м��ͣ 
        { i++;}
        while (a[j] > mid) //���ָ����С���м��ͣ 
        { j--;}
        if (i <= j)         //���i�����; j���ұ� 
         { if(a[i] != a[j]) //���� 
            {   p = a[i];
                a[i] = a[j];
                a[j] = p;
            }
            i++;//�����ƶ� 
            j--; 
        }
    } while (i <= j);
    if (l < j)//���м�ֵ��ߵ� 
        qsort(l, j);
    if (i < r)//���м�ֵ�ұߵ� 
        qsort(i, r);
}
