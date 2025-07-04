#include <iostream>
#include<cstring>
#define MAX 1000
using namespace std;

char** matrixa(int n) {
    char** a = new char* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new char[2*n];
    }
    memset(a, '*', sizeof(a));

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            a[i][j] = ' ';
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 2 * n - 1; j >= 2 * n - i; j--) {
            a[i][j] = ' ';
        }
    }
    return a;
}

char** matrixb(int n) {
    char** b = new char* [n];
    for (int i = 0; i < n; i++) {
        b[i] = new char[2 * n];
    }
    memset(b, '*', sizeof(b));
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= n - 2 - i; j++) {
            b[i][j] = ' ';
        }
    }
    int index = 1;
    for (int i = n - 1; i >= 1; i--) {
        index++;
        for (int j = n; j <= 2 * n - index; j++) {
            b[i][j] = ' ';
        }
    }
    return b;
}
void printMatrix(int** matrix, int nRows, int nCols) {
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n; cin >> n;
    
    return 0;
}
