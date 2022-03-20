#include<iostream>
using namespace std;
int main()
{int a,b,c,i;
cin>>a>>b>>c;
int max=a;
if(b>max) max=b;
if(c>max) max=c;
for(i=max;i<=a*b*c;i=i+max)
     if(i%a==0&&i%b==0&&i%c==0) break;
cout<<i;
}
