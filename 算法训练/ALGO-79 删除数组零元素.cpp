#include<iostream>
using namespace std;
int CompactIntegers(int &n,int a[])
{for(int i=n-1;i>=0;i--)
     {if(a[i]==0)
         {for(int j=i;j<n-1;j++)
         a[j]=a[j+1];
         --n;
         }
    }
return n;
}
int main()
{ int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
     cin>>a[i];
cout<<CompactIntegers(n,a)<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";  
 } 
