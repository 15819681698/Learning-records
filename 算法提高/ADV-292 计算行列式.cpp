#include <bits/stdc++.h>
using namespace std;
int arr[8][8];
int getDet(int a[8][8],int n); //计算n阶行列式 
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
{													//用了余子式的算法 
	if(n==1) return a[0][0];						// n = 1 时，Det(a) = a[0][0]
	if(n==2) return a[0][0]*a[1][1]-a[0][1]*a[1][0];//n = 2 时，Det(a) = a[0][0] * a[1][1] - a[1][0] * a[0][1]
	int ans = 0;  									//n > 2 时，Det(a) = sum(a[0][i] * (-1)^i * 去掉a[0][i]所在行列的n-1阶行列式的值)
	int tmp[8][8] = {0};							//我们按照行列式的性质递归即可
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
 
