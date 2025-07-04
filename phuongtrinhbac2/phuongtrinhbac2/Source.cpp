#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double a, b, c; 
        cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "phuong trinh co vo so nghiem" << endl;
                return 0;
            }
            else {
                cout << "phuong trinh vo nghiem" << endl;
                return 0;
            }
        }
        else {
            if (c == 0) {
                cout << "phuong trinh co 1 nghiem" << endl;
                cout << "0.0000";
                return 0;
            }
            else {
                if (-c / b < 0) {
                    cout << "phuong trinh vo nghiem";
                    return 0;
                }
                else {
                    cout << "phuong trinh co 2 nghiem" << endl;
                    cout << fixed << setprecision(5) << -sqrt(-c / b) << " " << sqrt(-c / b);
                    return 0;
                }
            }
        }
    }
    else {
        if (b == 0) {
            if (c == 0) {
                cout << "phuong trinh co 1 nghiem" << endl;
                cout << "0.00000";
                return 0;
            }
            else {
                if (-c / a < 0) {
                    cout << "phuong trinh vo nghiem";
                    return 0;
                }
                else {
                    cout << "phuong trinh co 2 nghiem" << endl;
                    cout << fixed << setprecision(5) << pow(-c / a, 0.25);
                    return 0;
                }
            }
        }
        else {
            if (c == 0) {
                if (-b / a < 0) {
                    cout << "phuong trinh co 1 nghiem" << endl;
                    cout << "0.00000";
                    return 0;
                }
                else {
                    cout << "phuong trinh co 3 nghiem" << endl;
                    cout << fixed << setprecision(5) << -sqrt(-b / a) << " " << "0.00000" << " " << sqrt(-b / a);
                    return 0;
                }
            }
            else {
                double delta = b * b - 4 * a * c;
                if (delta < 0) {
                    cout << "phuong trinh vo nghiem";
                    return 0;
                }
                if (delta == 0) {
                    if (-b / 2 * a < 0) {
                        cout << "phuong trinh vo nghiem";
                        return 0;
                    }
                    else {
                        cout << "phuong trinh co 2 nghiem" << endl;
                        cout << fixed << setprecision(5) << -sqrt(-b / 2 * a) << " " << sqrt(-b / 2 * a);
                        return 0;
                    }
                }
                if (delta > 0) {
                    if (c / a > 0 && -b / a > 0) {
                        cout << "phuong trinh co 4 nghiem" << endl;
                        cout << fixed << setprecision(5) << -sqrt((-b + sqrt(delta)) / 2 * a) << " " << -sqrt((-b - sqrt(delta)) / 2 * a) << " " << sqrt((-b - sqrt(delta)) / 2 * a) << " " << sqrt((-b + sqrt(delta)) / 2 * a);
                        return 0;
                    }
                    if (c / a > 0 && -b / a < 0) {
                        cout << "phuong trinh vo nghiem";
                        return 0;
                    }
                    if (a * c < 0) {
                        cout << "phuong trinh co 2 nghiem" << endl;
                        cout << fixed << setprecision(5) << -sqrt((-b + sqrt(delta)) / 2 * a) << " " << sqrt((-b + sqrt(delta)) / 2 * a);
                        return 0;
                    }
                }
            }
        }
    }
}