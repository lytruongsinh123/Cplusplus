#include<iostream>
using namespace std;
int giaithua(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * giaithua(n - 1);
}

int main() {
	int n; cin >> n;
	int k; cin >> k;
	double  k = giaithua(k) * giaithua(n - k);
	cout << "To hop chap k cua n";
	cout << giaithua(n) / k;
	
}