#include<iostream>
using namespace std;
int mang[15][15];
int canh = 8;
void khoitao() {
	int giatri = 1;
	int dem2 = 7;

	for (int dem1 = 0; dem1 <= canh / 2; dem1++,dem2--) {
		for (int i = dem1; i <= dem2; i++) {
			mang[dem1][i] = giatri++;
		}
		for (int j = dem1+1; j <= dem2; j++) {
			mang[j][dem2] = giatri++;
		}
		for (int k = dem2-1; k >= dem1; k--) {
			mang[dem2][k] = giatri++;
		}
		for (int t = dem2-1; t > dem1; t--) {
			mang[t][dem1] = giatri++;
		}
	}
	

	
}
void inkq() {
	cout << "\n\n\n";
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << "\t" << mang[i][j];
		}
		cout << "\n\n\n";
	}
	cout << "\n\n\n";
}
int main() {
	khoitao();
	inkq();
}