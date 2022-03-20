#include<iostream>
using namespace std;
int main()
{int n,m,b=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
     cin>>a[i];
cin>>m;
while(b<n)
{if(a[b]==m) break;
  b++;
}
if(b<n) cout<<b+1;
else cout<<-1;
return 0;
 } 
