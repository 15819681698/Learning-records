#include<iostream>
using namespace std;
 
int main()
{
	int n,j=4;
	cin>>n;
	int arr[5]={0};//最大的121转3进制 ，为11111，所有数组大小定为5 
	int s[5]={81,27,9,3,1};//砝码重 
	while(n) 
	{
		if(n%3==2)//余数为2，改为-1，商+1，这样才能对应算式中的减号 
		{
			arr[j--]=-1;
			n=n/3+1; 
		}
		else
		{
			arr[j--]=n%3;
			n/=3;
		}
	}
	for(int i=0;i<5;++i)
	{
		if(arr[i]!=0)
		cout<<s[i]*arr[i]; //最后直接相乘结果输出 
		if(arr[i+1]==1)
			cout<<'+'; 
	}
	return 0;
}
