//2014年C++A组题1 ——猜年龄 
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
 
//2014年C++A组题2 ——切面条
/*
折的次数：0  1  2  3  4   n 
面条数：  2  3  5  9  17  2的n次方+1 
n = 10  t = 1025   
*/

//2014年C++A组题3 ——神奇算式 
/*
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int ans=0; 
bool check(int t,int m)  //检测t和m是否由相同数字组成  例如：1234 和 2341 
{
	string t1,m1;
	stringstream ss;     // 要掌握int转string 
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

//2014年C++A组题4 —— 史丰收速算
/*
代码的完整性
有tr==0;tr<0;就应该有tr>0 
然后结合代码的i+1，去推测出i
在比赛时要多建几个cpp文件，可用来备用，或者用来计算 
*/

//2014年C++A组题5 ——锦标赛
/*
还是用完整性看题
要读懂变量的所代表的意义，才能真正解题，遇到难题，带着一种猜的方法，不过也要理解参数和变量的含义
代码写完后多测试其他数据，保证代码的准确性
不能用下标来比较，要用数据的大小来比较
a[b[k1]]>a[b[k2]] 
*/ 

//2014年C++A组题6——扑克排序
/*
#include<iostream>
#include<string>
#include<algorithm>
//#include<bits/stdc++.h> 
using namespace std;
bool check(string &s)  //引用，节省空间 
{
	if(s.rfind('A')-s.find('A')==2&&s.rfind('2')-s.find('2')==3&&s.rfind('3')-s.find('3')==4&&s.rfind('4')-s.find('4')==5)
	return true;
	return false;
}
int main()
{
	string s = "223344AA"; // 要按照 
	do{
		if(check(s))
		cout<<s<<endl;
		
	} while(next_permutation(s.begin(),s.end()));
	
 } 
// 2342A3A4
*/

