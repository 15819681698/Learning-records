
/*
解题思路： 
每个科学家k个问题的相对顺序不能改变,所以对于每个科学家来说他们问题本身的顺序就有可能存在坏对,、对于同一个科学家的问题,只要求相对顺序不变就好,
因此他们可以拆开插到别的科学家的问题之间。先分别记录每个科学家问题顺序出现的坏对的值，然后求得最大值即为最少的坏对的个数，每当出现坏对时，
我们就对其进行分层，然后分层排序，保证了相对顺序不会改变。

*/

#include<bits/stdc++.h>
using namespace std;
 
struct pro{
    int t;		//所在科学家累计到目前的“坏对”数量 
    int value;  //问题所需资源单位数
    int sci;    //问题所属科学家 
}p[200001];
int cmp(pro x,pro y){
    if(x.t==y.t){
        return x.value<y.value||(x.value==y.value&&x.sci<y.sci); // 问题所需资源单位数小排前面或（问题所需资源单位数相同且科学家编号小的） 
    }
    return x.t<y.t; //“坏对”小的问题的排前面 
}
int main()
{
    long long int n,k,a,b,x,y,m;
    int cnt=0,num=-1;
    cin>>n;
    for(int i=1;i<=n;i++){
        int t=0;
        cin>>k>>a>>x>>y>>m;
        for(int j=1;j<=k;j++){
            if(cnt<=2e5)  p[cnt++]=(pro){t,a,i};
            b=(x*a+y)%m;
            if(b<a&&j!=k)  t++;
            a=b;
        }
        num=max(num,t);
    }
    cout<<num<<endl;
    if(cnt<=2e5){
        sort(p,p+cnt,cmp);
        for(int i=0;i<cnt;i++){
            cout<<p[i].value<<" "<<p[i].sci<<endl;
        }
    }
    return 0;
}
