#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
 
 using namespace std;
 int n=50;
 void i2s(int num,string &str){
 	
 	
 }
 string add(string a,string b){
 	a=a.substr(a.find_first_not_of('0'));
 	b=b.substr(b.find_first_not_of('0'));
 	long long lenA=a.length();
 	long long lenB=b.length();
 	long long len=max(lenA,lenB)+10;
 	
 	reverse(a.begin(),a.end());
 	reverse(b.begin(),b.end());
 	string ans(len,'0');
 	for(int i=0;i<lenA;i++) ans[i]=a[i];
 	
	 int tmp=0;
 	for(int i=0;i<len;i++){
 		if(i<lenB)
		      tmp+=(ans[i]-'0')+(b[i]-'0');
 		else
 			tmp+=(ans[i]-'0');
		ans[i]=tmp%10+'0';
 		tmp/=10;	
	 }
	 reverse(ans.begin(),ans.end());
	 return ans.substr(ans.find_first_not_of('0'));
 }
 int cmp(string a,string b){
 	if(a==b) return 0;
 	if(a.length()>b.length()) return 1;
 	else if(a.length()<b.length()) return -1;
 	else{
 		if(a<b) return -1;
		if(b>a) return 1;
		else  return 0;
	 }
 }
 
 string subtract(string a,string b){
    reverse(a.begin(),a.end());
	reverse(b.begin(),b.end()); 
 	for(int i=0;i<b.length();i++){
 		if(a[i]>=b[i]){
 		a[i]=a[i]-b[i]+'0';
	    }
	 else{
	 	int k=1;
	 	while(a[i+k]=='0'){
	 		a[i+k]='9';
	 		k++;
		 }
		 a[i+k]=a[i+k]-'1'+'0';
		 a[i]=(a[i]-'0'+10)-(b[i]-'0');
	 }
    }
    reverse(a.begin(),ans.end());
    
    return a.substr(a.find_first_not_of('0'));
 }
 
 string divide(string a,string b){
 	string ans="0.";
 	for(int i=0;i<101;i++){
 		a.append("0");
 		int t=0;
 		while(cmp(a,b)>=1){
 			a=subtract(a,b);
 			t++;
		 }
 	string t_str;
 	i2s(t,t_str);
 		
	 }
 }
int main()
{
	cout<<add("1","1");
	
	
	
	
 } 
