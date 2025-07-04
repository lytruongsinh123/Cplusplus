#include<iostream>

// khoi tao cau hinh dau tien
// while < khi chua phai cau hinh cuoi cung >
// in ra man hinh cau hinh hien tai 
// sinh ra cau hinh tiep theo 

using namespace std;
int n,k, a[100], isfinal;

void ktao() {
	for (int i = 0; i < n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	// bat dau tu bit cuoi cung
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		isfinal = 0; // day chinh la cau hinh cuoi cung
	}
	else {
		a[i] = 1;
	}
}

bool check() {
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt += a[i];
	}
	return cnt == k;
}
int main() {
	cin >> n >> k;
	isfinal = 1;
	while (isfinal) {
		if (check()) {
			for (int i = 1; i <= n; i++) {
				cout << a[i];
			}
			cout << endl;
		}
		sinh();
	}
	return 0;
}