#include <iostream>
int n,m;
int a[40]={0};
int sum=0;
void fun(int x)
{
	if(x==n)
	{
		sum++;//����󷽰���һ
		return ;
	}
	if(a[x+1]==1)//�����һ��Ϊ������������ 
	{
		fun(x+2);
	}
	else//������һ��������
	{
		if(x+1==n)//���һ��
		{
			fun(x+1);
		}
		else//�����һ���������һ��������һ��������������һ��������
		{
			fun(x+1);
			if(a[x+2]!=1)//�������������������������
				fun(x+2);
		}
	}	
}
int main()
{
	int q=0;
	scanf("%d %d",&n,&m);
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&q);
		a[q]=1;
		
	}
	fun(1);
	printf("%d\n",sum);
	return 0;
}
