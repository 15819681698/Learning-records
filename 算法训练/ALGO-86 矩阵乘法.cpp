#include<iostream>
using namespace std;
int main()
{int m,s,n,i,j,t,k;
cin>>m>>s>>n;
int a[m][s],b[s][n],c[m][n];
for(i=0;i<m;i++)
     for(j=0;j<s;j++)
         cin>>a[i][j];
for(i=0;i<s;i++)
     for(j=0;j<n;j++)
         cin>>b[i][j];
for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
	     {int x=0;
		  for(t=0;t<s;t++)
          x=x+a[i][t]*b[t][j];
          cout<<x<<" ";
          }
      cout<<endl; 
     } 
 } 
