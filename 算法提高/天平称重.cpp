#include<iostream>
using namespace std;
 
int main()
{
	int n,j=4;
	cin>>n;
	int arr[5]={0};//����121ת3���� ��Ϊ11111�����������С��Ϊ5 
	int s[5]={81,27,9,3,1};//������ 
	while(n) 
	{
		if(n%3==2)//����Ϊ2����Ϊ-1����+1���������ܶ�Ӧ��ʽ�еļ��� 
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
		cout<<s[i]*arr[i]; //���ֱ����˽����� 
		if(arr[i+1]==1)
			cout<<'+'; 
	}
	return 0;
}
