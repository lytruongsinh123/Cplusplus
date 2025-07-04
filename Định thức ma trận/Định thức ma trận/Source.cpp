#include <iostream>
#include <math.h>
using namespace std;

void doidong(double a[10][10], int n, int x, int y) {
    int i;
    for (int i = 1; i <= n; i++) {
        double  t = a[x][i];
        a[x][i] = a[y][i];
        a[y][i] = t;
    }
}

void tinhdt(double a[10][10], int n) {
    double dt = 1;
    int dem = 0;
    int i, j, k;
    for (int i = 1; i < n; i++) {
        if (a[i][i] == 0) {
            for (int j = i + 1; j <= n; j++) {
                if (a[j][i] != 0 && j <= n) {
                    doidong(a, n, i, j);
                    dem++;  break;
                }
                else if (a[j][i] == 0 && j == n) {
                    dt = 0; goto b;
                }
            }
        }
        for (int j = i + 1; j <= n; j++) {
            double m = -a[j][i] / a[i][i];
            for (int k = i; k <= n; k++) {
                a[j][k] = a[j][k] + a[i][k] * m;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        dt *= a[i][i];
    }
    dt *= pow(-1, dem);
b:  cout << "Dinh thuc cua ma tran la: " << dt;
}

int main() {
    double a[10][10];
    int n;

    cout << "Nhap cap cua ma tran: ";
    cin >> n;

    cout << "\nNhap ma tran \n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    tinhdt(a, n);
    return 0;
}