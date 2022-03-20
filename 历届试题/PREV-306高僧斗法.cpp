#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN = 105;
int num[MAXN],ind;
int nim[MAXN],indx,sum;   //nim[]记录相邻 台阶的差值 

int main()
{
	while(cin>>num[++ind])
		if(cin.get()=='\n') break;
	sort(num+1,num+ind+1);
	for(int i=1;i<ind;i++)
		nim[i] = num[i+1]-num[i]-1;
	for(int i=1;i<ind;i+=2)
		sum^=nim[i];
	if(sum==0)
	{
		cout<<"-1";
	}	
	for(int i=1;i<ind;++i)
	{
		for(int j=1;num[i]+j<num[i+1];++j)
		{
			sum=0;
			nim[i] -= j;
			nim[i-1] += j;
			for(int k=1;k<ind;k+=2)
				sum ^= nim[k];
			if(sum == 0)
			{
				cout<<num[i]<<" "<<num[i]+j;
				return 0;
			}
			nim[i] += j;
			nim[i-1] -= j; 
		}
	}
	return 0;
}
