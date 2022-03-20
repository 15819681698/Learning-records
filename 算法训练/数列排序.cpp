#include<iostream>
using namespace std;
int main()
{int n,i,j,b;
cin>>n; 
int a[n];
for(i=0;i<n;i++) 
   cin>>a[i];
for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
       {if(a[i]<a[j]) 
	     {b=a[i];
	     a[i]=a[j];
	     a[j]=b;
	     }
	  }
	}
for(i=0;i<n;i++)
{cout<<a[i]<<" ";
}
	return 0;
 } 
