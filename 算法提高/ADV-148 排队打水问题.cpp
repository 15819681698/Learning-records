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
	sort(a,a+n);//С��������
	for(i=0;i<n;i++)
	{
		sort(v,v+r);//��С�������У�
		sum+=v[0]+a[i];
		v[0]+=a[i];//�Լ��Ĵ�ˮʱ�����ǰ���˵Ĵ�ˮʱ��
	}
	printf("%d\n",sum);
	return 0;
 
} 
