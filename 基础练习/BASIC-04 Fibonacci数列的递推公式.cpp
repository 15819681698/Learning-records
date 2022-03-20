#include<iostream>
using namespace std;
int main()
{long long  n,a=1,b=1,c;
  cin>>n;
  if (n==1||n==2) cout<<1; 
  else
  {for(int i=3;i<=n;i++)
    {c=a+b;
	a=b;
	b=c;
    }
    cout<<c%10007;
  }
  return 0;
 } 
