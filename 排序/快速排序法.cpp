#include<iostream>
using namespace std;
void qsort(int, int);
int a[101];

int main()
{	int n;
	cin>>n;
	for(int i=0;i<n;i++)
     {cin>>a[i];}
	qsort(0,n-1);
	for(int i=0;i<n;i++)
	{cout<<a[i]<<" ";}
	return 0;
}

void qsort(int l,int r)			//快排之三指针分区法（i，j，mid） 
{   int mid, p;   // mid是中间值  
    int j, i;     //i是左边 j是右边  
    i = l;
    j = r;
    mid = a[(l + r) / 2];  //取中间的一个数  
    do
    { while (a[i] < mid)   //如果指的数大于中间就停 
        { i++;}
        while (a[j] > mid) //如果指的数小于中间就停 
        { j--;}
        if (i <= j)         //如果i在左边; j在右边 
         { if(a[i] != a[j]) //交换 
            {   p = a[i];
                a[i] = a[j];
                a[j] = p;
            }
            i++;//各自移动 
            j--; 
        }
    } while (i <= j);
    if (l < j)//排中间值左边的 
        qsort(l, j);
    if (i < r)//排中间值右边的 
        qsort(i, r);
}
