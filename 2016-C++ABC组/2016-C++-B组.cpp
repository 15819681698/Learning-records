// 2016-C++-B���1�� ����ú����Ŀ 
/* 
#include<iostream>
using namespace std;
int main()
{
	int j=0;
	int i=0;
	int sum=0;
	for(int k=1;k<=100;k++){
		j=i+k;
		sum=sum+j;
		i=j;
		 
	}
	cout<<sum<<endl; 
 } 
 */
 
// 2016-C++-B���3�� ��������ʽ
/* 
#include<iostream>
#include<algorithm>
using namespace std;
int a[]={1,2,3,4,5,6,7,8,9};
bool check()
{
	int x=a[3]*100+a[4]*10+a[5];
	int y=a[6]*100+a[7]*10+a[8];
	if((a[1]*y+a[2]*x)%(a[2]*y)==0&&a[0]+(a[1]*y+a[2]*x)/(a[2]*y)==10)
		return true;
	return false;
}
int main()
{
	int ans=0;	
	do{
		if(check()) ans++; 
	}while(next_permutation(a,a+9));
	cout<<ans;
 } 
*/
 
// 2016-C++-B���5�� ������ǩ
/* 
�����ĵݹ飬������������壬�����仯���� 
*/

//  2016-C++-B���6�� ��������Ʊ
/*
����һ��ֱ����algorithm�е�next_permutation()����������ȫ����
���������ú����ĵݹ飬��Ҫȥ����Щ�ظ������У���׽ȡ������i>0&&a[i]=a[i-1]&&!vis[i-1]��ȥ���ظ��� 
*/

//  2016-C++-B���9�� ��������ƿ�� 
#include<iostream>
using namespace std;
int n;
int a[10005];
int pow(int x){
	for(int i=1;i<=n;i++){
		if(a[i]==x) return i; 
	}
}
void swap(int i,int j){
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
int main()
{
	int ans=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==i) continue;
		else{
			swap(i,pow(i));
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
 } 

