#include<iostream>
using namespace std;

double laisuat(double sotien, double rate, int sothang, int thanghientai = 1) {
    sotien += sotien * rate;

    if (thanghientai == sothang) {
        return sotien;
    }
    return laisuat(sotien, rate, sothang, thanghientai + 1);
}
int main() {
    int sothang; cin >> sothang;
    double sotien; cin >> sotien;
    cout << laisuat(sotien, 0.03, sothang) << endl;
}