#include<stdio.h>
#include<iostream>
using namespace std;
void sort3p(int* x, int len);
int main()
{
	int a[14]={0},i;
	for(i=0;i<14;i++)
		scanf("%3d",&a[i]);
	sort3p(a,14);

		for(i=0;i<14;i++)
		printf("%4d",a[i]);
	return 0;
}
void sort3p(int* x, int len)
{
	int p = 0;
	int left = 0;
	int right = len-1;
	while(p<=right)
	{
		if(x[p]<0)
		{
			int t = x[left];
			x[left] = x[p];
			x[p] = t;
			left++;
			p++;
		}
		else if(x[p]>0)
		{
			int t = x[right];
			x[right] = x[p];
			x[p] = t;
			right--;			
		}
		else
		{
			p++;  //ÃÓø’Œª÷√
		}
	}	
}

