//2016-C++-A���1�� ���� �������� 
/*
#include<iostream>
using namespace std;
int main(){
	int ans=0;
	for(int i=10;i<100;i++){
		int j=i-27;
		if(i%10*10+i/10==j){
			cout<<i<<" "<<j<<endl;
			ans++;
		}
	}
	cout<<ans; 
} 
// �𰸣�7
*/

//2016-C++-A���2�� ������������
/*
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<100;i++){
		for(int j=i;j<100;j++){
			if((i+j)*(j-i+1)/2==236)
			cout<<i<<" "<<j<<endl;
		}
	} 
}
//�𰸣�26
*/

//2016-C++-A���3�� ������������
/*
#include<iostream>
#include<algorithm>
using namespace std;
bool check(int a[10])
{
	if(abs(a[0]-a[1])==1||
	   abs(a[0]-a[3])==1||
	   abs(a[0]-a[4])==1||
	   abs(a[0]-a[5])==1||
	   
	   abs(a[1]-a[2])==1||
	   abs(a[1]-a[4])==1||
	   abs(a[1]-a[5])==1||
	   abs(a[1]-a[6])==1||

	   abs(a[2]-a[5])==1||
	   abs(a[2]-a[6])==1||
	   
	   abs(a[3]-a[4])==1||
	   abs(a[3]-a[7])==1||
	   abs(a[3]-a[8])==1||
	   
	   abs(a[4]-a[5])==1||
	   abs(a[4]-a[7])==1||
	   abs(a[4]-a[8])==1||
	   abs(a[4]-a[9])==1||
	   
	   abs(a[5]-a[6])==1||
	   abs(a[5]-a[8])==1||
	   abs(a[5]-a[9])==1||
	   
	   abs(a[6]-a[9])==1||
	   
	   abs(a[7]-a[8])==1||
	   
	   abs(a[8]-a[9])==1
	)
		return false;
	return true;
}
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	int ans=0;
	do{
		bool b=check(a);
		if(b) ans++;
	}while (next_permutation(a,a+10));
	cout<<ans<<endl;
}
//�𰸣�1580 
*/

//2016-C++-A���4�� ������������
/*
��ʶ�� 
�ñ�ͷ��˫ָ�뷽�� 
*/ 

//2016-C++-A���5�� ��������βһ
/*
�����Ƶļ���Ҫ��Ϥ��Ҫѧ�᳢�ԣ�ͨ�����´��������У��²�����룬Ȼ����г���
*/ 

//2016-C++-A���6�� ����������ҵ 
/*
#include<iostream>
using namespace std;
int a[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
int ans=0;
bool check()
{
	if(a[0]+a[1]==a[2]&&
		a[3]-a[4]==a[5]&&
		a[6]*a[7]==a[8]&&
		a[9]%a[10]==0&&
		a[9]/a[10]==a[11])
		return true;
	return false;
}
void f(int k){
	if(k==13){
		if(check()) ans++;
	}
	for(int i=k;i<13;i++){
		{int t=a[k];a[k]=a[i];a[i]=t;}
		if(k==2&&a[0]+a[1]!=a[2]||k==5&&a[3]-a[4]!=a[5]){
			{int t=a[k];a[k]=a[i];a[i]=t;}
			continue;
		}
		f(k+1);
		{int t=a[k];a[k]=a[i];a[i]=t;}
	}
}
int main()
{
	f(0);
	cout<<ans;
}
//�𰸣�64
*/

//2016-C++-A���7�� ��������Ʊ
/*
#include<iostream>
#include<algorithm>
using namespace std;
int ans=0;
int g[3][4];
void dfs(int i,int j)
{
	g[i][j]=0;
	if(i-1>=0&&g[i-1][j]==1) dfs(i-1,j);
	if(i+1<=2&&g[i+1][j]==1) dfs(i+1,j);
	if(j-1>=0&&g[i][j-1]==1) dfs(i,j-1);
	if(j+1<=3&&g[i][j+1]==1) dfs(i,j+1);
}
bool check(int a[12])
{
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(a[i*4+j]==1) g[i][j]=1;
			else g[i][j]=0;
		}
	}
	//��ά�������ѵ���ͨ��⣬��ͨ���� 
	int cnt=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(g[i][j]==1) {
				dfs(i,j);
				cnt++;
			}
		}
	}
	return cnt==1;
}
int main()
{
	int a[12]={0,0,0,0,0,0,0,1,1,1,1,1};
	do{
		if(check(a))  ans++; 
	}while(next_permutation(a,a+12)); //���ظ���ȫ���� 
	cout<<ans<<endl;
	return 0;
 } 
// �𰸣�116
*/


