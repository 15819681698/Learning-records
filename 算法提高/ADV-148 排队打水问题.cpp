#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[501]={0};
int v[501]={0};
int main()
{
	int n,r,sum=0;
	scanf("%d %d",&n,&r);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);//小到大排序
	for(i=0;i<n;i++)
	{
		sort(v,v+r);//从小到大排列，
		sum+=v[0]+a[i];
		v[0]+=a[i];//自己的打水时间加上前面人的打水时间
	}
	printf("%d\n",sum);
	return 0;
 
} 
