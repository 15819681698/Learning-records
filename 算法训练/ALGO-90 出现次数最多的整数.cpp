#include<iostream>
using namespace std;
int main()
{int N,max=0;
cin>>N;
if(N<=0) return 0; 
int a[N];
for(int i=0;i<N;i++)
     cin>>a[i];
int anx=a[0];
for(int i=0;i<N;i++)
     { int x=a[i];
     int m=0;
     for (int j=i+1;j<N;j++)
         {
	      if(x==a[j]) m++;
	     }
     if(m>max)
         {max=m;
         anx=x;
	     }
	else if(m=max&&x<anx)
	     {max=m;
	      anx=x;
	     }
	 }
cout<<anx;
 } 
 /*
 #include<cstring>
#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
int main(void){
    long long n,data,count=1,a[21],count_max=0;
    cin >> n;
    if(n <= 0) return 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    data = a[1];
    count = 1;
    for(int i=2;i<=n;i++){
        if(a[i] != a[i-1]){
            if(count_max < count){
                count_max = count;
                data = a[i-1];
            }
            count = 1;
        }else count++;
        if(i == n){
            if(count_max < count){
                count_max = count;
                data = a[n]; 
            }
        }
    }
    cout << data;
    return 0;
}*/
