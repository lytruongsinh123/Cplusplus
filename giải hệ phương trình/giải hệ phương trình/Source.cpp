#include<iostream>
using namespace std;
int main() {
	double a1, b1, c1;
	double a2, b2, c2;
	cout << "nhap a1 :"; cin >> a1;
	cout << "nhap b1 :"; cin >> b1;
	cout << "nhap c1 :"; cin >> c1;
	cout << "nhap a2 :"; cin >> a2;
	cout << "nhap b2 :"; cin >> b2;
	cout << "nhap c2 :"; cin >> c2;
	int check = a1 * b2 - a2 * b1;
	double x, y;
	if (check != 0) {
		cout << "he co 1 nghiem duy nhat :" << endl;
		y = (c2 * (a1 / a2) - c1) / (b2 * (a1 / a2) - b1);
		x = (c1 - b1 * y) / a1;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		return 0;
	}
	else {
		if (b1 * c2 == b2 * c1) {
			cout << "he co vo so nghiem" << endl;
			return 0;
		}
		else {
			cout << "he vo nghiem" << endl;
			return 0;
		}
	}
}