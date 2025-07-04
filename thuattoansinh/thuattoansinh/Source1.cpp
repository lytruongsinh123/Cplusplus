// sinh to hop chap k cua n 
#include<iostream>
using namespace std;
int n1, k1, a1[100], ok1;

void ktao1() {
	for (int i = 1; i <= k1; i++) {
		a1[i] = i;
	}
}

void sinh1() {
	int i = k1;
	// n - k + i
	while (i >= 1 && a1[i] == n1 - k1 + i) {
		--i;
	}
	if (i == 0) {
		ok1 = 0;
	}
	else {
		a1[i]++;
		for (int j = i + 1; j <= k1; j++) {
			a1[j] = a1[j - i] + 1;
		}
	}
}
int main() {
	cin >> n1 >> k1;
	ok1 = 1;
	ktao1();
	while (ok1) {
		for (int i = 1; i <= k1; i++) {
			cout << a1[i];
		}
		cout << endl;
		sinh1();
	}
	return 0;
}