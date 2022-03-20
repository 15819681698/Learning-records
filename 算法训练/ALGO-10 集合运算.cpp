#include<iostream>
#include<algorithm>
using namespace std;
int main()
{    int n,m,i,j;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     	 cin>>a[i];
     cin>>m;
	 int b[m]; 
	 for(i=0;i<m;i++)
     	cin>>b[i];
     int minn=n;
	 if(n>m)  minn=m;
	 int c[n],d[n];
	 int t=0,k=0;
	  for(i=0;i<n;i++)
     	 d[i]=1;
	 for(i=0;i<n;i++)
	     {for(j=0;j<m;j++)//交集 
	         {if(a[i]==b[j]) 
		         {c[t++]=a[i];
		          d[i]=-1;
			     }
		     }
	     }
	 int e[n-t],l=0;
	 for(i=0;i<n;i++) //补集 
	     {if(d[i]==1) 
		     e[l++]=a[i];} 
	 int f[m+l];
	 for(i=0;i<m;i++)//并集 
	     f[i]=b[i];
	 for(i=0;i<l;i++)
	     f[m+i]=e[i];
	 sort(c,c+t);
	 sort(f,f+m+l);
	 sort(e,e+l);
	 for(i=0;i<t;i++)
	     cout<<c[i]<<" ";
	 cout<<endl;
	 for(i=0;i<m+l;i++)
	     cout<<f[i]<<" ";
	 cout<<endl;
	 for(i=0;i<l;i++)
	     cout<<e[i]<<" ";
	 cout<<endl;
 } 
