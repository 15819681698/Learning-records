#include<iostream>
using namespace std;
int main()
{
	int n;//����ֻ�� 
	cin>>n;
	int a[n]; //���ϵ�λ�ã���һֻΪ��ð������1 
	for(int i=0;i<n;i++) cin>>a[i]; 
	int x=a[0];
	if(x>0){ //��ð��һֻ���� 
		int ans=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]<0&&-a[i]>x) //���ð������1��������Ļ��ð 
			ans++;
		}
		if(ans!=1){//�������ð������1��������ϣ����ڸ�ð������1�����ͬ������Ҳ���ð 
			for(int i=0;i<n;i++){
				if(a[i]>0&&a[i]<x)
				ans++;
			}
		}
		cout<<ans;	
	}
	if(a[0]<0){  //�������෴ 
		int ans=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]>0&&a[i]<-x)
			ans++;
		}
		if(ans!=1){
			for(int i=0;i<n;i++){
				if(a[i]<0&&a[i]<x)
				ans++;
			}
		}
		cout<<ans;	
	}
	return 0;
 } 
