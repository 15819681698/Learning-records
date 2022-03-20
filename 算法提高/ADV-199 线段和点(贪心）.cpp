#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
queue<int>tag;
class QJ{
	public:
		int s,t;
};
int cmp(QJ x,QJ y){
	if(x.t!=y.t) return x.t<y.t;
	return x.t>y.t;
}
int main()
{
	 int n,m,i;
	 cin>>n>>m;
	 int a[n];
	 QJ b[m+1]; 
	 for(i=0;i<n;i++)
	 	 cin>>a[i];
	 for(i=0;i<m;i++)
	 	cin>>b[i].s>>b[i].t;
	 sort(b,b+m,cmp);
	 int z=1,j=0,sum=0,l,r;
       b[m].s=1000000000,b[m].t=1000000000;
	  for(i=0;i<=m;i++)
        {
            if(b[i].s>l) l=b[i].s;
            if(b[i].t<r) r=b[i].t;
            if(tag.size()&&(l>tag.front()||r<tag.front()))
            {
                while(tag.size()&&(l>tag.front()||r<tag.front()))
                {
                    tag.pop();
                    if(tag.size()==0)
                    {
                        sum++;
                        z=1;
                        break;
                    }
                }
            }
            if(z)
            {
                l=b[i].s;
                r=b[i].t;
                for(j=0;j<n;j++)
                    if(a[j]>=b[i].s&&a[j]<=b[i].t)
                        tag.push(a[j]);
                z=0;
            }
        }
        if(!sum) cout<<"-1";
        else cout<<sum;
}	  

