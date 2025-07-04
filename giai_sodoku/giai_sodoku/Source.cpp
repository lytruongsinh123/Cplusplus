#include<iostream>
using namespace std;
const int N = 9;
int a[N][N];

// Nhập số vào bảng
void input(int a[N][N]) {
    cout << "Input board" << endl;
    int temp[N][N] = {
                        {6, 8, 5, 4, 7, 9, 1, 3, 2},
                        {2, 1, 9, 5, 3, 8, 7, 6, 4},
                        {7, 3, 4, 1, 6, 2, 5, 9, 8},
                        {0, 0, 0, 3, 0, 5, 8, 0, 0},
                        {8, 5, 0, 0, 2, 0, 3, 0, 0},
                        {0, 0, 3, 0, 9, 0, 2, 5, 6},
                        {0, 0, 8, 0, 0, 0, 4, 2, 0},
                        {0, 0, 0, 6, 0, 7, 9, 0, 0},
                        {1, 0, 0, 0, 0, 0, 6, 0, 3} };

    // Copy từ mảng temp vào a
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = temp[i][j];
        }
    }
}

// In bảng sudoku
void print(int a[N][N]) {
    cout << "Print board" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
}

bool check(int a[N][N], int row, int column, int x) {
    // Kiểm tra trong hàng đã tồn tại số x chưa
    for (int j = 0; j < N; j++) {
        if (a[row][j] == x) {
            return false;
        }
    }

    // Kiểm tra trong cột đã tồn tại số x chưa
    for (int i = 0; i < N; i++) {
        if (a[i][column] == x) {
            return false;
        }
    }

    // Kiểm tra trong ô 3x3 đã tồn tại số x chưa
    int startRow = row - row % 3;
    int startColumn = column - column % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i + startRow][j + startColumn] == x) {
                return false;
            }
        }
    }
    return true;
}

bool backtrack(int a[N][N], int row, int column) {
    if (row == N - 1 && column == N) {
        return true;
    }
    if (column == N) {
        row++;
        column = 0;
    }
    if (a[row][column] > 0) {
        return backtrack(a, row, column + 1);
    }
    for (int j = 1; j <= N; j++) {
        if (check(a, row, column, j)) {
            a[row][column] = j;
            if (backtrack(a, row, column + 1)) {
                return true;
            }
            a[row][column] = 0; // Backtrack
        }
    }
    return false;
}

int main() {
    input(a);
    if (backtrack(a, 0, 0)) {
        print(a);
    }
    else {
        cout << "No answer" << endl;
    }
    return 0;
}
