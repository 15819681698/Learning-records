#include<iostream>
using namespace std;
main()
{
	long long int n;
	cin>>n;
	if(n<3)cout<<n;
	else if(n%2==1)
		cout<<(n*(n-1)*(n-2));
	else if(n%3!=0)
		cout<<(n*(n-1)*(n-3));
	else if(n%2==0)
		cout<<((n-1)*(n-2)*(n-3));
	return 0;
}

