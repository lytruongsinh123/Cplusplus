#include<iostream>
#include <iomanip>
#define MAX 1000

#include <utility>
using namespace std;

void input(double a[]) {
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
}
void sort(double a[]) {
    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

void output(double a[]) {
    for (int i = 0; i < 10; ++i) {
        cout << a[i];
    }
}

double TH(double a[]) {
    double sum = 0.0;
    for (int i = 5; i <= 9; ++i) {
        sum += a[i];
    }

    return (double)sum / 5.0;
}


int count(double a[]) {
    int count = 0.0;
    for (int i = 0; i < 10; ++i) {
        if (a[i] == 0.0) count++;
    }

    return count;
}
int main() {
    double a[MAX];
    int n; cin >> n;
    input(a);
    double gk1, gk2; cin >> gk1 >> gk2;
    double ck, dst; cin >> ck >> dst;
    sort(a);

    double GK = static_cast<double> (gk1 + gk2) / 2.0;
    double diemThucHanh = TH(a);
    double CC = n + (10 - count(a));

    double TK;
    if (CC < 20) {
        TK = 0.0;
        cout << TK;
    }

    else {
        TK =0.2 * diemThucHanh + 0.2 * GK + 0.6 * (dst + ck);
        double a = 0.2 * diemThucHanh;
        double b = 0.2 * GK;
        double c = 0.6 * (dst + ck);
       
        std::cout << std::fixed << std::setprecision(1) << std::ceil(TK * 10) / 10 << std::endl;

    }


    cout << diemThucHanh << " "  << 0.2*diemThucHanh<< " " << CC << " " << dst << " ";


}