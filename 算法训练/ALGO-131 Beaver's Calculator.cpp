
/*
����˼·�� 
ÿ����ѧ��k����������˳���ܸı�,���Զ���ÿ����ѧ����˵�������Ȿ���˳����п��ܴ��ڻ���,������ͬһ����ѧ�ҵ�����,ֻҪ�����˳�򲻱�ͺ�,
������ǿ��Բ𿪲嵽��Ŀ�ѧ�ҵ�����֮�䡣�ȷֱ��¼ÿ����ѧ������˳����ֵĻ��Ե�ֵ��Ȼ��������ֵ��Ϊ���ٵĻ��Եĸ�����ÿ�����ֻ���ʱ��
���ǾͶ�����зֲ㣬Ȼ��ֲ����򣬱�֤�����˳�򲻻�ı䡣

*/

#include<bits/stdc++.h>
using namespace std;
 
struct pro{
    int t;		//���ڿ�ѧ���ۼƵ�Ŀǰ�ġ����ԡ����� 
    int value;  //����������Դ��λ��
    int sci;    //����������ѧ�� 
}p[200001];
int cmp(pro x,pro y){
    if(x.t==y.t){
        return x.value<y.value||(x.value==y.value&&x.sci<y.sci); // ����������Դ��λ��С��ǰ�������������Դ��λ����ͬ�ҿ�ѧ�ұ��С�ģ� 
    }
    return x.t<y.t; //�����ԡ�С���������ǰ�� 
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
