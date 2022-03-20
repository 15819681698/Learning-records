#include <iostream>
int n,m;
int a[40]={0};
int sum=0;
void fun(int x)
{
	if(x==n)
	{
		sum++;//到最后方案加一
		return ;
	}
	if(a[x+1]==1)//如果下一个为陷阱则跳两步 
	{
		fun(x+2);
	}
	else//否则跳一步或两步
	{
		if(x+1==n)//最后一步
		{
			fun(x+1);
		}
		else//如果下一步不是最后一步并且下一步不是陷阱则跳一步或两步
		{
			fun(x+1);
			if(a[x+2]!=1)//如果下两步不是陷阱则跳两步
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
