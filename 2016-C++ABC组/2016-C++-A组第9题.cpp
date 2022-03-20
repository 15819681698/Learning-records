#include<iostream>
#include<cstring>
#include<algorithm>
char s[1000];
using namespace std;
char* rev(char *s){
	int len=strlen(s);
	char *ans=(char*)malloc(len*sizeof(char)); //开创一个空间用于存储反转后字符 
	for(int i=0;i<len;i++){
		ans[i]=s[len-1-i];
	}
	return ans;
}
int lcs(char *s1,char *s2){ //最长公共子序列的长度 
	int len = strlen(s1);
	int dp[len][len];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<len;i++){
		if(s1[i]==s2[0]) dp[0][i]=1;
		else dp[0][i]=i==0?0:dp[0][i-1];
	} 
	for(int j=0;j<len;j++){
		if(s2[j]==s1[0]) dp[j][0]=1;
		else dp[j][0]=j==0?0:dp[j-1][0];
	}
	for(int i=1;i<len;i++){
		for(int j=1;j<len;j++){
			if(s2[i]==s1[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[len-1][len-1]; 
}
int main()
{
	cin>>s;
	int len=strlen(s);
	int l=lcs(s,rev(s));
	cout<<len-l<<endl;
	return 0;
}
