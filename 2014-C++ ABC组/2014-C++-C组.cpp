//2014-C++-C���3�� ��������ĸ
/* 
#include<iostream>
using namespace std;
int main()
{
	char arr[2014];
	int index=0;
	for(int i=1;i<=106;i++){
		for(int j=0;j<19;j++){
			arr[index++]='a'+j;
		}
	}
	int len=2014;
	while(len!=1){
		int k=0; //��ָ�� 
		for(int i=1;i<len;i+=2){
			arr[k++]=arr[i];
		}
		len=k;
		arr[len]='\0';
	}
	cout<<arr[0];
	return 0;
 } 
// �𰸣�q
*/

//2014-C++-C���7�� ������Ȧ
/*
������c[i]��ʾi������2i���˵���Ե���������c[1]=1��c[i]=c[i-1]*(2i-1)
���õݹ���Ƴ�c[i]�����ö�̬����ķ��� 
*/
/*
#include<iostream>
using namespace std;
double f[101][101];
int main()
{
	f[1][1]=1;
	for(int sheng=2;sheng<=100;sheng++){
		f[sheng][1]=f[sheng-1][1]*(sheng-1)*2/(2*sheng-1);
		for(int quan=2;quan<=100;quan++){	
			f[sheng][quan]=(f[sheng-1][quan-1]+f[sheng-1][quan]*(sheng-1)*2)/(2*sheng-1);
		}
	}
	double p=-1,ans=-1;
	for(int quan=1;quan<=100;quan++){
		if(f[100][quan]>p) {
			p=f[100][quan];
			ans=quan;
		 }
	}
	cout<<ans; 
	return 0; 
}
*/

//2014-C++-C���8�� �������ǹ�
#include<iostream>
using namespace std;
const int N=100;
int a[100];
int n;
bool check()
{
	int t=a[0];
	for(int i=1;i<n;i++){
		if(a[i]!=t) return false;
	}
	return true;
 } 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	while(1){
		int t=a[0];
		for(int i=0;i<n-1;i++){
			a[i]=a[i]/2;
			a[i]=a[i+1]/2+a[i];
			if(a[i]&1==1){
				a[i]++;
				ans++;
			}
		}
		a[n-1]=a[n-1]/2; //Ҫ�ֿ����� 
		a[n-1]=t/2+a[n-1];
		if(a[n-1]&1==1){
			a[n-1]++;
			ans++;
		}
		if(check()){
			cout<<ans;
			return 0;
		}
	}
 } 
