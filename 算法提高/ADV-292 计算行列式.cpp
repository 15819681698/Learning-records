#include <bits/stdc++.h>
using namespace std;
int arr[8][8];
int getDet(int a[8][8],int n); //����n������ʽ 
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
				scanf("%d",&arr[i][j]);
		printf("%d\n",getDet(arr,n));
	}
	return 0;	
} 
int getDet(int  a[8][8],int n)  
{													//��������ʽ���㷨 
	if(n==1) return a[0][0];						// n = 1 ʱ��Det(a) = a[0][0]
	if(n==2) return a[0][0]*a[1][1]-a[0][1]*a[1][0];//n = 2 ʱ��Det(a) = a[0][0] * a[1][1] - a[1][0] * a[0][1]
	int ans = 0;  									//n > 2 ʱ��Det(a) = sum(a[0][i] * (-1)^i * ȥ��a[0][i]�������е�n-1������ʽ��ֵ)
	int tmp[8][8] = {0};							//���ǰ�������ʽ�����ʵݹ鼴��
	for(int i=0;i<n;++i)				
	{
		for(int row=0; row<n-1; ++row)  
		{
			for(int col=0; col<i; ++col)   
				tmp[row][col] = a[row+1][col];
			for(int col=i; col<n-1;++col)
				tmp[row][col] = a[row+1][col+1];
		}
		ans += a[0][i]*getDet(tmp,n-1)*(i%2==0?1:-1);
	}
	return ans;
}
 
