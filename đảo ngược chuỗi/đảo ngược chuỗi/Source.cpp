#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int a[1000];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n / 2; i++) {
        swap(a[i], a[n - i + 1]);
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}