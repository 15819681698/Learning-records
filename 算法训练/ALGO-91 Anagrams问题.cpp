#include<iostream>
#include<cstring> 
using namespace std;
int main()
{
	 char a[81],b[81],ch;
	 int i,j,len1,len2;
     cin>>a>>b;
	 len1=strlen(a);
	 len2=strlen(b);
	 if (len1!=len2)
	     cout<<"N";
	 else
	 {
	   for (i=0;i<len1;i++)
	   {
	   	   if (a[i]>='A'&&a[i]<='Z')
	   	     a[i]+=32;
	   	   if (b[i]>='A'&&b[i]<='Z')
	   	     b[i]+=32;
	   }
	 for (i=0;i<len1-1;i++)
	     for (j=0;j<len1-1-i;j++)
	     {
	    	 if (a[j]>a[j+1])
	    	 {
	    		ch=a[j];a[j]=a[j+1];a[j+1]=ch;
	         }
	         if (b[j]>b[j+1])
	         {
	    		ch=b[j];b[j]=b[j+1];b[j+1]=ch;
	    	 }
	     }
	     if (strcmp(a,b)==0)
	    	 cout<<"Y";
	     else
	         cout<<"N";
    }
}

