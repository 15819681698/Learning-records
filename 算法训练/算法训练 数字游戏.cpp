#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int a[50],b[50],n,sum,i,j,k=1;
	cin>>n>>sum;
	j=n;
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	do{
		for(i=0;i<n;i++){
			b[i]=a[i];
		}
		while(j>1){
			for(i=0;i<j-1;i++){
				b[i]=b[i]+b[i+1];
			}
			j--;
		}
		j=n;
		if(b[0]==sum){
			k++;		//加k这个条件可以保证当没有解时不会输出,，也就是说当b[0]!=sum时，k不会变成2，不会变成2也就不会输出 
			break;
		}
	}while(next_permutation(a,a+n));    //algorithm中全排列函数next_permutation(a,a+n) 
	if(k==2){
		for(i=0;i<n;i++){ 
	     	cout<<a[i]<<" ";
    	}
	}
	return 0; 
}
/*思路：本题最主要的还是用了一个可以自动排序的函数，名为do{}while(next_permutation(a,a+n))（所需要引入的头文件为algorithm）,
它会将数组中所有的数从小到大排列好，然后再进行计算就好，而使用这个方法是看到题中有一个多种答案输出字典序最小的一个，
这个刚好可以按照字典序大小进行排序，有了排列只需要就加数，加到最后一个等于题中所输入的sum值即可，说到这里差不多说完了，
但是我感觉这题有个坑，就是题中说了数据确保有解，这不是让解题者觉得一定会有解，只是解的多少，然后测试数据有一个没有解，什么也不输出，
看了好久，直到测试了数据发现最小的可以达到两千多才知道有解也需要判定，加了一个有解则变量值发生改变的条件才正确，看来做题还是得考虑全部情况，
才能保证不出差错。*/

