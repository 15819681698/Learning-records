//2015-C++-A���1�� ��������������
/*
��ö��  
#include<iostream>
using namespace std;
int main()
{
	for(int a=1;a<35;a++){
		for(int b=1;b<35;b++){
			for(int c=1;c<35;c++){
				if(a*a+b*b+c*c==1000&&a<=b&&b<=c) cout<<a<<" "<<b<<" "<<" "<<c<<endl;
			}
		}
	}
 } 
//�𰸣�10 
*/

//2015-C++-A���2�� ������ϵը��
/*
//ע�⣺���� 
#include<iostream>
using namespace std;
int main()
{
	int i=21+31;//2014�� 
	i+=365;//2015�� 
	i+=366;//2016�� 
	i+=31+28+31+30+31+30+31+5;//2017��8��5�� 
	cout<<i<<endl;
 } 
 // �𰸣�2017-08-05
*/

//2015-C++-A���3�� �������������
/*
#include<iostream>
#include<string>
#include<sstream>
#include<set>
using namespace std;
void i2s(int num,string &str){ //intתstring 
	stringstream ss;
	ss<<num;
	ss>>str;
}
//��չ
//void s2i(string s,int i){  //stringתint 
//	stringstream ss;
//	ss<<s;
//	ss>>i;
//}
bool cheak(string s){ //���string���Ƿ����0~9�ҽ�������һ��������set(���ϵ�Ψһ��) 
	set<char>ss;
	for(int i=0;i<s.length();i++){
		ss.insert(s[i]);
	}
	return s.size()==ss.size()&&ss.size()==10;	
}
int main()
{
	for(int i=1;i<10000;i++){
		int t1=i*i;
		int t2=i*i*i;
		string s1,s2;
		i2s(t1,s1);
		i2s(t2,s2);
		if(cheak(s1+s2)) {
			cout<<i;
			break;
		}
	}
 } 
 */
 
//2015-C++-A���4�� �������������
/*
//printf()�������Ӧ�ã�Ҫ�˽�����������÷� 
#include<iostream>
using namespace std;
int main()
{
	printf("%*s%s", 10,"abc");//��˼������ַ���abc��������ռ10��λ�ã���������ַ���s��߲��ո������ͬ��printf("%10s", s);
	//��չ��printf("%.*s\n", 1, "abc");//%.*s ���е�.*��ʾ��ʾ�ľ��� ���ַ������(s)������˵���ǿ�ȣ� ���*�����ֵ�ɺ���Ĳ����б��е�������(int)ֵ���� 
 } 
*/

//2015-C++-A���5�� �������������
/*
//Ҫ��ϸ���⣬��һ��״̬����Ҫ�ص�ԭ����״̬ 
ȫ�����õݹ�ķ�ʽ��ʵ�֣��ڵݹ����Ҫ���л���
*/ 
