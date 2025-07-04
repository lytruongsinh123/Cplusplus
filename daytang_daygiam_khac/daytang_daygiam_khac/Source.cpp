// Online C++ compiler to run C++ program online
#include <iostream>
#define MAX 100
using namespace std;
bool checkdaytang(int a[MAX], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}
bool checkdaygiam(int a[MAX], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n; cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (checkdaytang(a, n)) cout << "tang";
    else {
        if (checkdaygiam(a, n)) cout << "giam";
        else cout << "khac";
    }

}