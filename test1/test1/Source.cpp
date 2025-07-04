#include<iostream>
using namespace std;

class solution {
public:
    int ngay, thang, nam;

    bool checknamnhuan() {
        if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
            return true;
        return false;
    }

    bool ngayhople() {
        if (nam < 0) 
        {
            return false;
        }

        if (thang < 1 || thang > 12) 
        {
            return false;
        }

        if (ngay < 1) 
        {
            return false;
        }

        switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (ngay > 31) {
                return false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (ngay > 30) {
                return false;
            }
            break;
        case 2:
            if (checknamnhuan())
            {
                if (ngay > 29)
                {
                    return false;
                }
            }
            else {
                if (ngay > 28)
                {
                    return false;
                }
            }
            break;
        }

        return true;
    }

    void ngayketiep() {
        if (!ngayhople())
        {
            cout << "INVALID";
        }

        ngay++;

        if ((thang == 2 && ngay > 29 && checknamnhuan()) || (!checknamnhuan() && ngay > 28) || ((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay > 30) || ngay > 31) {
            ngay = 1;
            thang++;
        }
        if (ngay == 31 && thang == 12) {
            ngay = 1;
            thang = 1;
            nam = 1;
        }
        cout << ngay << "/" << thang << "/" << nam;
    }

};
int main() {
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    solution K;
    K.checknamnhuan();
    K.ngayhople();
    K.ngayketiep();
}
