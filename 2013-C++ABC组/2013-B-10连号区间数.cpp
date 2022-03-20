#include<iostream>
using namespace std;
int main()
{int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
     cin>>a[i];
	 int ans=n;
	 for(int i=0;i<n;i++)
	 	 {int L=a[i],R=a[i];
	 	 for(int j=i+1;j<n;j++)
	 	 	 {if(a[j]>R) R=a[j];
	 	 	  if(a[j]<L) L=a[j];
			  if(R-L==j-i) ans++; 
			   }
	 	 }
	 cout<<ans;  
}
