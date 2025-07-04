#include<iostream>
#include<cmath>
using namespace std;
double canbac2(int n) {
	if (n == 1) {
		return sqrt(n);
	}
	else {
		return sqrt(n + canbac2(n - 1));
	}
}
int main() {
	int n; cin >> n;
	cout << canbac2(n) << endl;
}