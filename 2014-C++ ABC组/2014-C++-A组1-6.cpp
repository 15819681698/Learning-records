//2014��C++A����1 ���������� 
/*
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<100;i++)
	{
		for(int j=1;j<100;j++)
		{
			if(i-j<8&&i-j>0&&i!=j&&((i*j)==6*(i+j)))
			cout<<i<<" "<<j<<endl;	
		}
	}
 } 
 */
 
//2014��C++A����2 ����������
/*
�۵Ĵ�����0  1  2  3  4   n 
��������  2  3  5  9  17  2��n�η�+1 
n = 10  t = 1025   
*/

//2014��C++A����3 ����������ʽ 
/*
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int ans=0; 
bool check(int t,int m)  //���t��m�Ƿ�����ͬ�������  ���磺1234 �� 2341 
{
	string t1,m1;
	stringstream ss;     // Ҫ����intתstring 
	ss<<t;
	ss>>t1;
	stringstream ss1;
	ss1<<m;
	ss1>>m1;
	sort(t1.begin(),t1.end());
	sort(m1.begin(),m1.end());
	if(t1==m1) return true; 
	return false;
}
int main()
{
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			if(j!=i)
			for(int k=0;k<10;k++){
				if(k!=i&&k!=j)
				for(int l=0;l<10;l++){
					if(l!=j&&l!=i&&l!=k){
						if(j!=0){
							int t = i*1000+j*100+k*10+l;
							int m = i*(j*100+k*10+l);
							if(check(t,m)){
								cout<<i<<" "<<j<<k<<l<<endl;
								ans++;
							}
						}
						if(k!=0){
							int t = i*1000+j*100+k*10+l;
							int m = (i*10+j)*(k*10+l);
							if( (i*10+j)<(k*10+l)&&check(t,m)){
								cout<<i<<j<<" "<<k<<l<<endl;
								ans++;
							}
						}
					}
				} 
			} 
	    } 
	} 
	cout<<ans;
} 
*/

//2014��C++A����4 ���� ʷ��������
/*
�����������
��tr==0;tr<0;��Ӧ����tr>0 
Ȼ���ϴ����i+1��ȥ�Ʋ��i
�ڱ���ʱҪ�ཨ����cpp�ļ������������ã������������� 
*/

//2014��C++A����5 ����������
/*
�����������Կ���
Ҫ��������������������壬�����������⣬�������⣬����һ�ֲµķ���������ҲҪ�������ͱ����ĺ���
����д��������������ݣ���֤�����׼ȷ��
�������±����Ƚϣ�Ҫ�����ݵĴ�С���Ƚ�
a[b[k1]]>a[b[k2]] 
*/ 

//2014��C++A����6�����˿�����
/*
#include<iostream>
#include<string>
#include<algorithm>
//#include<bits/stdc++.h> 
using namespace std;
bool check(string &s)  //���ã���ʡ�ռ� 
{
	if(s.rfind('A')-s.find('A')==2&&s.rfind('2')-s.find('2')==3&&s.rfind('3')-s.find('3')==4&&s.rfind('4')-s.find('4')==5)
	return true;
	return false;
}
int main()
{
	string s = "223344AA"; // Ҫ���� 
	do{
		if(check(s))
		cout<<s<<endl;
		
	} while(next_permutation(s.begin(),s.end()));
	
 } 
// 2342A3A4
*/

