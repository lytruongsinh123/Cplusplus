#include<iostream>
using namespace std;
double canbacn(int n) {
	if (n == 1) {
		return pow(1, 1.0 / 1);
	}
	else {
		return pow(n + canbacn(n - 1), 1.0 / n);
	}
}
int main() {
	int n; cin >> n;
	cout << canbacn(n) << endl;
}