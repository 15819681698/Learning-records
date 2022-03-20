//2015-C++-A组第1题 ——方程整数解
/*
简单枚举  
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
//答案：10 
*/

//2015-C++-A组第2题 ——星系炸弹
/*
//注意：闰年 
#include<iostream>
using namespace std;
int main()
{
	int i=21+31;//2014年 
	i+=365;//2015年 
	i+=366;//2016年 
	i+=31+28+31+30+31+30+31+5;//2017年8月5日 
	cout<<i<<endl;
 } 
 // 答案：2017-08-05
*/

//2015-C++-A组第3题 ——奇妙的数字
/*
#include<iostream>
#include<string>
#include<sstream>
#include<set>
using namespace std;
void i2s(int num,string &str){ //int转string 
	stringstream ss;
	ss<<num;
	ss>>str;
}
//扩展
//void s2i(string s,int i){  //string转int 
//	stringstream ss;
//	ss<<s;
//	ss>>i;
//}
bool cheak(string s){ //检查string中是否包含0~9且仅仅包含一个，借助set(集合的唯一性) 
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
 
//2015-C++-A组第4题 ——格子中输出
/*
//printf()这个函数应用，要了解这个函数的用法 
#include<iostream>
using namespace std;
int main()
{
	printf("%*s%s", 10,"abc");//意思是输出字符串abc，但至少占10个位置，不足的在字符串s左边补空格，这里等同于printf("%10s", s);
	//扩展：printf("%.*s\n", 1, "abc");//%.*s 其中的.*表示显示的精度 对字符串输出(s)类型来说就是宽度， 这个*代表的值由后面的参数列表中的整数型(int)值给出 
 } 
*/

//2015-C++-A组第5题 ——九数组分数
/*
//要仔细审题，改一个状态，就要回到原来的状态 
全排列用递归的方式来实现，在递归完后，要进行回溯
*/ 
