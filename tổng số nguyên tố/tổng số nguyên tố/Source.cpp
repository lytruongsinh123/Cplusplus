#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cout << "nhap so n : "; cin >> n;
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (isprime(i)) {
			sum += i;
		}
	}
	cout << "Tổng các số nguyên tô nho hơn n : " << sum << endl;
}