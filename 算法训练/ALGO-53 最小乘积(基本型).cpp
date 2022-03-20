#include<iostream>
#include<algorithm>
using namespace std;
bool cmd(int a,int b)
{return a>b;
}
int main()
{int T;
cin>>T;
int s[T];
for(int i=0;i<T;i++)
     { int n;
     cin>>n;
     int a[n],b[n];
     for(int j=0;j<n;j++)
         {cin>>a[j];}
     for(int j=0;j<n;j++)
         {cin>>b[j];}
     sort(a,a+n);
     sort(b,b+n,cmd);
     int sum=0;
     for(int j=0;j<n;j++)
     sum=sum+a[j]*b[j];
     s[i]=sum;
     }
for(int i=0;i<T;i++)
cout<<s[i]<<endl;
}
