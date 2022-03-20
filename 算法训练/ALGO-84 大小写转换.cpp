#include<iostream>
#include<cstring>
using namespace std;
int main()
{char a[20];
  cin>>a;
  for(int i=0;i<strlen(a);i++)
  {
  
    if(a[i]>='A'&&a[i]<='Z') a[i]=a[i]+32; 
    else a[i]=a[i]-32;
    cout<<a[i];
}
 } 
