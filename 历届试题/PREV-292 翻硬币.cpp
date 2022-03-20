#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 	char a[1000],b[1000];
   	cin>>a>>b;
   	int len = strlen(a);
   	int ans=0;
   	for(int i=0;i<len;i++)
	     {
		   if(a[i]!=b[i])
	   	     {  a[i]=b[i];
	   	        if(a[i+1]=='*') a[i+1]='o';
	   	        else a[i+1]='*';
	   	        ans++;
			 } 
	    }
	cout<<ans;
 } 
