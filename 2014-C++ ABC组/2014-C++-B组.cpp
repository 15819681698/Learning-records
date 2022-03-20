//2014-C++-B组第1题 ——啤酒与饮料 
/*
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<40;i++)
	for(int j=1;j<50;j++)
	{
		if(i<j&&i*2.3+j*1.9==82.3)
			cout<<i<<" "<<j;
	}
 } 
 // 答案： 11
 */
 
 //2014-C++-B组第3题 ——李白打酒
 /*
 #include<iostream>
 using namespace std;
 int ans=0;
 void f(int dian,int hua,int jiu)
 {
 	if(hua==0&&dian==0&&jiu==1) ans++;
 	if(dian>0) f(dian-1,hua,jiu*2);
 	if(hua>0) f(dian,hua-1,jiu-1);
 }
 int main()
 {
 	f(5,9,2);
 	cout<<ans;
  } 
//答案：14 
*/
//2014-C++-B组第1题 ——打印图形
/*
理解问题前后的代码，然后进行猜测，推理，验证
*/ 

//2014-C++-B组第6题 ——奇怪的算式
/*
#include<iostream>
using namespace std;
int ans=0;
int gcd(int a,int b) //求最大公因数的函数 
{
	if(b==0) return a;
	return gcd(b,a%b);
}
int main()
{
	for(float a=1;a<10;a++){
		for(float b=1;b<10;b++){
			if(a==b) continue;
			for(float c=1;c<10;c++){
				for(float d=1;d<10;d++){
					if(d==b) continue;
					int g1=gcd(a*c,b*d);
					int g2=gcd(a*10+c,b*10+d);
					if(a*c/g1==(a*10+c)/g2&&b*d/g1==(b*10+d)/g2)
					ans++;
				}
			}
		}
	}
	cout<<ans;
 } 
 //答案：14 
 */
 
 /*
 
 //2014-C++-B组第7题
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int check(vector<int>a)
 {
 	int r1=a[0]+a[3]+a[5]+1; //确定每一条线的编号， 
 	int r2=a[1]+a[4]+a[8]+1;
 	int r3=a[0]+a[1]+a[2]+8;
 	int r4=a[3]+a[6]+11;
 	int r5=a[2]+a[4]+a[7]+3;
 	int r6=a[5]+a[6]+a[7]+a[8];
 	if(r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6){
 	for(int i=0;i<9;i++)
 	cout<<a[i]<<" ";
 	}
 }
 int main()
 {
 	vector<int>a;
 	a.push_back(2);
 	for(int i=4;i<8;i++){
 		a.push_back(i);
	 }
	 for(int i=9;i<=12;i++){
	 	a.push_back(i);
	 }
 	do{
 		check(a);
	 }while(next_permutation(a.begin(),a.end()));
  } 
  */
