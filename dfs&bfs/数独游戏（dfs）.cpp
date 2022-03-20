#include<iostream>
using namespace std;

int check(int arr[9][9], int x, int y, int t)
{   //���ͬ�к�ͬ�� 
	for(int i=0; i<9; i++)
	{
		if(arr[x][i] == t||arr[i][y] == t)
		return 0;
	}
	//���С�Ź���
	for(int l=(x/3)*3; l<(x/3+1)*3; l++)
	{
		for(int m=(y/3)*3; m<(y/3+1)*3; m++)
		{
			if(arr[l][m]==t) return 0;
		 } 
	}
	return 1;
 } 

void dfs(int arr[9][9], int x, int y)
{
	if(x == 9 )//�ҵ�Ψһ�� 
	{
		for(int i=0; i<9; i++)//��� 
		{
			for(int j=0; j<9; j++)
			{
				cout<<arr[i][j]<<" "; 
			}
			cout<<endl;
		} 
	return;
	} 
	if(arr[x][y] == 0)
	{
		for(int i=1; i<=9; i++)
		{
			if(check(arr,x,y,i) == 1)
			{
				arr[x][y] = i;
				dfs(arr, x+(y+1)/9, (y+1)%9);
			}
		}
		arr[x][y] = 0; //���ǰ���ѭ����û���ҵ�Ψһ�����Ž⣬����� 
	}
	else
	{
		dfs(arr, x+(y+1)/9, (y+1)%9);  //�ݹ���һ������� 
	}
}

int main()
{
	int arr[9][9] = { {0,0,5,3,0,0,0,0,0},
					{8,0,0,0,0,0,0,2,0},
					{0,7,0,0,1,0,5,0,0},
					{4,0,0,0,0,5,3,0,0},
					{0,1,0,0,7,0,0,0,6},
					{0,0,3,2,0,0,0,8,0},
					{0,6,0,5,0,0,0,0,9},
					{0,0,4,0,0,0,0,3,0},
					{0,0,0,0,0,9,7,0,0} };
	dfs(arr,0,0);
	return 0;
}
