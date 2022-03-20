#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
     {cin>>a[i];}
for(int i=0;i<n;i++)
     {for(int j=i;j<n;j++)
         if(a[i]>a[j])
             { int t=a[i];
               a[i]=a[j];
               a[j]=t;   }
     }
  int sum=0;
  for(int i=0;i<n;i++)
  sum=sum+a[i];
cout<<a[n-1]<<endl;
cout<<a[0]<<endl;
cout<<sum<<endl;
return 0;        
}
