#include<iostream>
#include<math.h>
using namespace std;
void input(int& n, int& k) {
	cout << " nhap so n: "; cin >> n;
	cout << " nhap so k: "; cin >> k;
	
}
int  giai_thua_a (int a) {
	if (a == 0) return 1;
	else return a * giai_thua_a(a - 1);
}
int giai_thua_b (int b) {
	if (b == 0) return 1;
	else return b * giai_thua_b(b - 1);
}
int giai_thua_k (int k) {
	if (k == 0) return 1;
	else return k * giai_thua_k(k - 1);
}
int main() {
	int a, b, k, n; float C;
	input(n,k);
	a = n + k - 1;
	b = n - k;
	C = giai_thua_a (a)/ (giai_thua_b (b) * giai_thua_k (k));
	cout << C << endl;
}

