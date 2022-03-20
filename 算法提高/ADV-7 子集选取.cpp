#include<iostream>
using namespace std;
int main()
{	 int n,k,i,j,t;
	 cin>>n>>k;
	 int a[n+1];
	 for(i=k;i<=n;i++)
	 {	 int x=1,y=1;
	     for(j=n;j>=n-i+1;j--)
	       {x=x*j;
		   }
		 for(t=1;t<=i;t++)
		 {y=y*t;
		 }
		 a[i]=x/y;
	 }
	  
	 for(i=k;i<=n;i++)
	 {cout<<a[i]<<endl;
	 }
}
  
