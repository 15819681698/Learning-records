#include<iostream>
#include<algorithm>
using namespace std;
class child{
	public:
		int have,need,other;
};
bool cmp(child a,child b){
	return a.other>b.other;
}
int main()
{	int m,i,j;
	 cin>>m;
	 for(i=0;i<m;i++)
	 {
	 	 int n;
	 	 cin>>n;
	 	 child a[n];
	 	 for(j=0;j<n;j++)
		{
	 	    cin>>a[j].have>>a[j].need;
	 	    a[j].other=a[j].have-a[j].need;
		}
		sort(a,a+n,cmp);
		int s=0,temp=1;
		for(j=0;j<n;j++)
		{
			if(a[j].other+s>=0)
			{
				s=s+a[j].have; 
			}
		    else
			{
		    	cout<<"NO"<<endl;
		    	temp=0;
				break; 
			}
		}
		if(temp==1) 
		{
		 cout<<"YES"<<endl;
	    }
	 }
}
