// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void phantichthuaso(int n) {
    vector<int> a;
    int k = 2;
    while (n > 1) {
        if (n % k == 0) {
            n = n / k;
            a.push_back(k);
        }
        else {
            k++;
        }
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }
}
int main() {
    int n; cin >> n;
    phantichthuaso(n);
}