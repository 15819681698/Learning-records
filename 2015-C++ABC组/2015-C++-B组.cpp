//2015-C++-B���1�� ����������Ŀ
/*
//�кܶ���������ÿһλ�����г�����������ת��Ϊ�ַ�������find('4')==string::npos���� 
#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	for(int i=1;i<=9;i++){
		if(i==4) continue;
		for(int j=0;j<=9;j++){
			if(j==4) continue;
			for(int m=0;m<=9;m++){
				if(m==4) continue;
				for(int n=0;n<=9;n++){
					if(n==4) continue;
					for(int k=0;k<=9;k++){
						if(k!=4) ans++; 
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
 }
 */

//2015-C++-B���3�� ������������
/*
// �ȼ����abcdefi֮��Ĺ�ϵ��Ȼ�����ö�٣�����Ч���ź� 
#include<iostream>
using namespace std;
int main(){
	for(int b=2;b<9;b++){
		for(int d=2;d<9;d++){
			if(b==d) continue;
			for(int g=2;g<9;g++){
				if(g==d||g==b) continue;
				int c=b+1;
				if(c==g||c==d) continue;
				if(c+g<=10) continue;
				int sum=9000+b*100+c*10+d+1000+g*10+b;
				for(int i=2;i<9;i++){
					if(i==b||i==d||i==c||i==g) continue;
					if(sum==10000+c*100+b*10+i) cout<<1<<0<<g<<b;
				}
			}
		}
	}
}*/

//2015-C++-B���6�� �����ӷ���˷�
/*
//�Ƚ���Ŀ����͸����ʱ���ҵ�һЩ���� 
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=46;i++){
		for(int j=i+1;j<48;j++){
			if(i*(i+1)-(i+i+1)+j*(j+1)-(j+j+1)==2015-1225)
			cout<<i<<" "<<j<<endl;
		}
	}
} 
// �𰸣�16 
*/

//2015-C++-B���8�� �����ƶ�����
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int w,m,n;
	cin>>w>>m>>n;
	int rm=m%w==0?m/w:m/w+1; //m���к� 
	int rn=n%w==0?n/w:n/w+1;//n���к� 
	int cm=0;//m���к� 
	int cn=0;//n���к� 
	if(rm%2==0) cm=rm*w-m+1;
	else cm=w-(rm*w-m);
	if(rn%2==0) cn=rn*w-n+1;
	else cn=w-(rn*w-n);
	cout<<abs(cm-cn)+abs(rm-rn)<<endl;
 } 
 */
 

//2015-C++-B���10�� ��������֮��
 
 
 
 
 
