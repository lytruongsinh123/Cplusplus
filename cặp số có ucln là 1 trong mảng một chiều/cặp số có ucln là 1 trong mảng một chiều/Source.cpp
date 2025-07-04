#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int UCLN(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b)
        return  UCLN(a - b, b);

    return UCLN(a, b - a);
}
int main() {
    int n; cin >> n;
    int a[100];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (UCLN(a[i], a[j]) == 1) {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }

}