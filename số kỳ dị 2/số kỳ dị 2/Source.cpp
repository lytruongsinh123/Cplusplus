#include<iostream>
#include<vector>
using namespace std;

int UCLN(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        return UCLN(a - b, b);
    }
    return UCLN(a, b - a);
}

int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}
int BCNN_ARRAY(vector<int> a) {
    if (a.empty()) {
        return 0;
    }
    for (int i = 0; i < a.size() - 1; i++) {
        a[i + 1] = BCNN(a[i], a[i + 1]);
    }
    return a[a.size() - 1];
}
bool check_so_ky_di(int n) {
    vector<int> a;
    int tich = 1;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            tich *= i;
        }
    }
    if (tich == BCNN_ARRAY(a)) return true;
    return false;

}



int main() {

    int b[10] = { 2,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < 10; i++) {
        if (check_so_ky_di(b[i])) {
            cout << b[i] << endl;
        }
    }

    return 0;
}
