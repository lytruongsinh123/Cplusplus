#include<iostream>
#define MAX 1000
using namespace std;

int main() {
    int ROW, COLS;
    cin >> ROW >> COLS;
    int Q; cin >> Q;
    int a[MAX][MAX];
    int b[MAX];
    int c[MAX];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < Q; i++) {
        cin >> b[i] >> c[i];
    }

    for (int i = 0; i < Q; i++) {
        cout << a[b[i]][c[i]] << endl;
    }
}