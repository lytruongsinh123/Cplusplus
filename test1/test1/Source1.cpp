#include <iostream>
#include<map>
#define MAX 1000
using namespace std;

void input(char a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void output(char a[MAX][MAX], int n, map<int, int>& vitri) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
            if (a[i][j] == 'O') {
                vitri.insert({ i,j });
            }
        }
        cout << endl;
    }
}

void invitri(map<int, int> vitri) {
    for (pair<int, int> x : vitri) {
        cout << x.first << " " << x.second << endl;
    }
}

int main() {
    map<int, int> vitri;
    char a[MAX][MAX];

    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;
    input(a, n);
    output(a, n, vitri);
    invitri(vitri);

    return 0;
}
