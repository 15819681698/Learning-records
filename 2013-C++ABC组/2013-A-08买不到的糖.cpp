#include<iostream>
#include<cstring>
#define N 100001
using namespace std;
int a[N];
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	a[n]=a[m]=1;  //输入的n和m肯定是可以买的
	memset(a,0,sizeof(a)); //记得是cstring头文件
	for (i=0;i<n*m;i++)//从0开始的意思是，可能不取n只取m，比如7
	{
	for (j=0;j<n*m;j++)//可能不去m只取n，比如4
	 {
	 	if (i*n+j*m>=N) //不能超出数组的范围
	 	break;
	 	a[i*n+j*m]=1;
	 }
    }
    for (i=n*m-1;i>=0;i--)
    {
    	if (!a[i])//从后往前第一个设为0的数组下标
    	{
    		cout<<i;
    		break;
	}

	}
	return 0;
}
