#include<iostream>
#include<cstring>
#define N 100001
using namespace std;
int a[N];
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	a[n]=a[m]=1;  //�����n��m�϶��ǿ������
	memset(a,0,sizeof(a)); //�ǵ���cstringͷ�ļ�
	for (i=0;i<n*m;i++)//��0��ʼ����˼�ǣ����ܲ�ȡnֻȡm������7
	{
	for (j=0;j<n*m;j++)//���ܲ�ȥmֻȡn������4
	 {
	 	if (i*n+j*m>=N) //���ܳ�������ķ�Χ
	 	break;
	 	a[i*n+j*m]=1;
	 }
    }
    for (i=n*m-1;i>=0;i--)
    {
    	if (!a[i])//�Ӻ���ǰ��һ����Ϊ0�������±�
    	{
    		cout<<i;
    		break;
	}

	}
	return 0;
}
