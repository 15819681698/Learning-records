#include<iostream>
using namespace std;
int f(int *p,int &n)
{ int s=0;
for(int i=0;i<n;i++)
   s=s+p[i];
cout<<s<<" "<<s/n;
}
int main()
{int n;
cin>>n;
int *p=new int [n];
for(int i=0;i<n;i++)
cin>>p[i];
f(p,n);
delete p;
 } 
