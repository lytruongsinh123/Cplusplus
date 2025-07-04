#include<iostream>
using namespace std;
int sothang(double sotien, double sotiendapung, int sothang1, double laisuat) {
	sotien = sotien + sotien * laisuat;
	if (sotien > sotiendapung) {
		return sothang1;
	}
	return sothang(sotien, sotiendapung, sothang1 + 1, laisuat);
}
int main() {
	int sotiengoc; cout << "nhap so tien goc :"; cin >> sotiengoc;
	int sotiendapung; cout << "nhap so tien can dap ung:"; cin >> sotiendapung;
	double laisuat; cout << "nhap lai suat :"; cin >> laisuat;
	cout << sothang(sotiengoc, sotiendapung, 1, laisuat);

}