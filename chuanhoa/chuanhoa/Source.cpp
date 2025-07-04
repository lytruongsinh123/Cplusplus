#include <iostream>

using namespace std;

int main() {
    // Khai báo m?ng
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Vi?t các hoán v? c?a m?ng
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            // In ra các hoán v?
            for (int k = 0; k < n; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
