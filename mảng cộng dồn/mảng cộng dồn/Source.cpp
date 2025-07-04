#include<iostream>
#include<iterator>
#define MAX 100

using namespace std;
int main() {
	int n;
	int row;
	int colum;

	
	cout << " nhap so phan tu cua a : ";  cin >> n;
	cout << " nhap so hang : "; cin >> row;
	cout << " nhap so cot : "; cin >> colum;
	int a[MAX];
	int b[MAX][MAX];
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	int prefix[6] = { 0 }; 
	for (int i = 1; i <= n; i++) {
		prefix[i] = prefix[i - 1] + a[i];
	}
	int q; cout << " so lan test :"; cin >> q;
	while (q--) {
		int left, right;
		cout << " input left : "; cin >> left;
		cout << " input right : "; cin >> right;
		cout << prefix[right] - prefix[left - 1] << endl;
	}


	for (int j = 1; j <= row; j++) {
		for (int k = 1; k <= colum; k++) {
			cout << "b" << "[" << j << "]" << "[" << k << "] : ";
			cin >> b[j][k];
		}
	}
	cout << endl;

	int prefix1[MAX][MAX] = { 0 };
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= colum; j++) {
			prefix1[i][j] = prefix1[i - 1][j] + prefix1[i][j - 1] - prefix1[i - 1][j - 1] + b[i][j];
		}
	}
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= colum; j++) {
			printf("%5d", prefix1[i][j]);
		}
		cout << endl;
	}

	int rowStart, rowEnd; 
	int columStart,columEnd;
	cout << " input row_start :"; cin >> rowStart;
	cout << " input colum_start :"; cin >> columStart;
	cout << " input row_end : "; cin >> rowEnd;
	cout << " input colum_end : "; cin >> columEnd;
	int  t = prefix1[rowEnd][columEnd] - prefix1[rowStart - 1][columEnd] - prefix1[rowEnd][columStart - 1] + prefix1[rowStart - 1][columStart - 1];
	cout << " sum in (rowStart, columStart) to (rowEnd, columEnd) : " << t << endl;
	
}