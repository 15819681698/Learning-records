#include<iostream>
using namespace std;
void GetTwoInts(int &x,int &y) {
	do {
		cin >> x >> y;

	} while (x > 100 || y > 100);
}
int main() {
	int x, y;
	GetTwoInts(x,y);
	cout << x + y;
	return 0;
}





