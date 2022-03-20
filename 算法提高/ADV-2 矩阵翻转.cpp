// https://blog.dotcpp.com/a/58277
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=50;
int n,m,a[N][N],f[N][N];
int solve_j(int j){
   int ans=0;
    for(int i=0;i<m;i++)
    {
          int temp=0;
          f[i][j]=1;  
          temp+=f[i][j]*a[i][j];
    
          f[i+m+1][j]=f[m][j]*f[i][j];  
        temp+=f[i+m+1][j]*a[i+m+1][j];
   
          f[i][j+m+1]=f[i][m]*f[i][j];
          temp+=f[i][j+m+1]*a[i][j+m+1];
   
          f[i+m+1][j+m+1]=f[m][j+m+1]*f[i][j+m+1];
          temp+=f[i+m+1][j+m+1]*a[i+m+1][j+m+1];
 
          if(temp<0) 
        {
          temp=-temp;
        } 
          ans+=temp;
   }
   return ans;
}
int solve(int mask)
{ 
    int ans=0;
   for(int i=0;i<=m;i++)
    { 
        f[i][m]=(mask&(1<<i))?-1:1;
        ans+=a[i][m]*f[i][m];
   }
   for(int i=m+1;i<n;i++)
   {
        f[i][m]=f[m][m]*f[i-m-1][m];
       ans+=a[i][m]*f[i][m];
   }
   for(int j=0;j<m;j++)
    {
          int temp;
       f[m][j]=1;
        f[m][j+m+1]=f[m][j]*f[m][m];
          temp=solve_j(j)+f[m][j]*a[m][j]+f[m][j+m+1]*a[m][j+m+1];
        f[m][j]=-1;
          f[m][j+m+1]=f[m][j]*f[m][m];
          temp=max(temp,solve_j(j)+f[m][j]*a[m][j]+f[m][j+m+1]*a[m][j+m+1]);
          ans+=temp;
   }
   return ans;
}
int main()
{
   while(scanf("%d",&n)==1)
   { 
        int ans=-10000000;
         m=n/2;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           { 
                scanf("%d",&a[i][j]);
                }
        } 
        int temp=(1<<(m+1));    //×î¶àÖ´ÐÐ(n/2+1)^2 
        for(int mask=0;mask<temp;mask++)
        { 
           ans=max(ans,solve(mask));
       } 
         printf("%d\n",ans);
   }
    return 0;
}
