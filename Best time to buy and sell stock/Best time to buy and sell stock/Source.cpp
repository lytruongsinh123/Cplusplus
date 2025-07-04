#include<iostream>
#define MAX 1000
using namespace std;
int main() {
	int n; 
	int a[MAX];
	cout << " nhap size : "; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int priceMax = 0;
	int k;
	for (int i = 1; i <= n; i++) {
		for ( int j = i + 1; j <= n; j++) {
			if (a[i] < a[j] || a[i] == a[j]) {
				int price = a[j] - a[i];
				if (price >= priceMax) {
					priceMax = price;
					k = j;
				}
			}
			else k = 0;
		}
	}
	cout << " ngay ban tot nhat : " << k;
	
}
