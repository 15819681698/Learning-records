#include<iostream>
using namespace std;
int main()
{int n,m,i,l,j;
cin>>n;
unsigned int a[n];
for(i=0;i<n;i++)
     cin>>a[i];
cin>>m;
for(l=0;l<m;l++)
{    int num=0; 
     unsigned int b[3];
	  for(i=0;i<3;i++)
         {cin>>b[i];}
     unsigned int c[n];
      for(i=b[0]-1;i<b[1];i++)
         {c[num++]=a[i];}
	  for(i=0;i<num;i++)
	     {for(j=i+1;j<num;j++)
	         {if(c[i]<c[j])
	             {int t=c[i];
	             c[i]=c[j];
	             c[j]=t;
		          }
		      }
	     }
	 cout<<c[b[2]-1]<<endl; 
}
return 0;
} 
/*
#include<stdio.h>
const int maxn=1000+10;
int find1(unsigned int seq[],int l,int r)

{
int i=l,j=r;
int x=seq[i];
while(i<j)
{
while(i<j&&seq[j]>=x) j--;
seq[i]=seq[j];
while(i<j&&seq[i]<=x) i++;
seq[j]=seq[i];
}
seq[i]=x;
return i;
}
int find(unsigned int seq[],int l,int r,int k)//找第k大的数
{
if(l>=r)
return seq[l];
int q=find1(seq,l,r);
if(q==k-1)
return seq[q];
else if(q>k-1)
return find(seq,l,q-1,k);//Sa中元素个数大于等于k
else
return find(seq,q+1,r,k);
}
int main()
{
int i,n,m;
int l,r,k;
unsigned int seq[maxn];
unsigned int sort_seq[maxn];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&seq[i]);
}
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d%d%d",&l,&r,&k);
int d=0,j;
for(j=l-1;j<r;j++,d++)
sort_seq[d]=seq[j];
printf("%d\n",find(sort_seq,0,d-1,d-k+1));
}
return 0;
}*/
