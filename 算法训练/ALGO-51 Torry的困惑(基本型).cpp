#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
bool a[2000000];
for(int i=0;i<=2000000;i++) a[i]=true;
a[0]=a[1]=false;
int t=0,sum=1;
for(int i=2;i<=2000000;i++)
     {   if (a[i])
          {sum=(sum*i)%50000;
            t++;
            cout<<i;
          for(int j=2*i;j<=2000000;j+=i) a[j]=false;
        }
    if(n==t) break;
     }
cout<<sum;
}
