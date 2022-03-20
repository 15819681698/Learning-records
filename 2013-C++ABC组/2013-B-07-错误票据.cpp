#include<iostream>
#include<algorithm>
using namespace std;
int num[10000];

int main(){
	int n;
	cin>>n;

	int k=0;
	while(cin>>num[k])
		k++;
	sort(num,num+k);
	int x = 0 , y = 0;
	for(int j=0;j<k - 1;j++)
	{
		if(x && y) break;
		if(num[j] == num[ j + 1] - 1) continue;
		else if(num[j] == num[j + 1]) y = num[j];
		else x = num[j] + 1;
	}
	cout << x << " " << y;
}


