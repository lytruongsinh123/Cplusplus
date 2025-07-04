#include <iostream>
#define MAX 100
#include <cstdlib>
#include<cstring> 
using namespace std;

int main() {
	int n, k = 1;   cin >> n;
	char a[MAX][MAX]; memset(a, ' ', sizeof(a));
	char b[MAX][MAX]; memset(b, ' ', sizeof(b));
	char c[MAX][MAX]; memset(c, ' ', sizeof(c));
	char d[MAX][MAX]; memset(d, ' ', sizeof(d));

	// matrix a
	int index1 = 0;
	for (int i = 0; i < n; i++) {
		index1++;
		for (int j = n; j <= 2 * n - index1; j++) {
			a[i][j] = '*';
		}
	}
	// matrix b
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			b[i][j] = '*';
		}
	}
	// matrix c
	int index2 = n;
	for (int i = n; i < 2 * n; i++) {
		index2--;
		for (int j = n - 1; j >= index2; j--) {
			c[i][j] = '*';
		}
	}
	// matrix d
	int index3 = 2 * n;
	for (int i = 2 * n - 1; i >= n; i--) {
		index3--;
		for (int j = 2 * n - 1; j >= index3; j--) {
			d[i][j] = '*';
		}
	}


	while (true)
	{
		switch (k) {
		case 1:
			for (int i = 0; i < 2 * n; i++) {
				for (int j = 0; j < 2 * n; j++) {
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			system("cls");
			break;
		case 2:
			for (int i = 0; i < 2 * n; i++) {
				for (int j = 0; j < 2 * n; j++) {
					cout << b[i][j] << " ";
				}
				cout << endl;
			}
			system("cls");
			break;
		case 3:
			for (int i = 0; i < 2 * n; i++) {
				for (int j = 0; j < 2 * n; j++) {
					cout << c[i][j] << " ";
				}
				cout << endl;
			}
			system("cls");
			break;
		case 4:
			for (int i = 0; i < 2 * n; i++) {
				for (int j = 0; j < 2 * n; j++) {
					cout << d[i][j] << " ";
				}
				cout << endl;
			}
			system("cls");
			break;
		}
		k++;
		if (k == 6)
			k = 1;
	}
	return 0;
}
