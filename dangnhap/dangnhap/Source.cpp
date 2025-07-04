#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
struct sinhvien {
    string hoten;
    string matkhau;
    string namsinh;
    string trangthai;
    string quocgia;
    string Ma;
    string stt;
};

char chucaidau(string s) {
    return s[0];
}

void nhapthongtin(sinhvien &A,int count) {
    cout << " nhap ho ten :"; cin >> A.hoten;
    cout << " nhap nam sinh :"; cin >> A.namsinh;
    cout << " nhap trang thai :"; cin >> A.trangthai;
    cout << " nhap quoc gia :"; cin >> A.quocgia;
    A.Ma = to_string(count) + chucaidau(A.quocgia);
}
void xuatthongtin(sinhvien A) {
    
        cout << "HO TEN LA :"  << A.hoten << endl;
        cout << " NAM SINH LÀ :" << A.namsinh << endl;
        cout << " QUOC GIA LA :"<<  A.quocgia << endl;
        cout << " TRANG THAI LA :"<< A.trangthai << endl;
  

}
void xoathongtin() {

}
int main() {
    sinhvien hung;
    hung.hoten = "DO TUAN HUNG";
    hung.matkhau = "23021410";
    int solansai = 0;
    

    while (1) {
        string s;
        cout << "nhap ho ten :"; getline(cin, s);
        string a;
        cout << "nhap mat khau :"; getline(cin, a);
        if (s == hung.hoten && a == hung.matkhau) {

            vector<sinhvien> danhsach;

            int stt = 0;
            while (1) {


                sinhvien A;


                cout << "---------------MENU-----------------" << endl;
                cout << "1.nhap thong tin vdv" << endl;
                cout << "2.xuat thong tin vdv" << endl;
                cout << "3.tim thong tin vdv" << endl;
                cout << "4.xoa thong tin vdv" << endl;
                cout << "5.luu thong tin vdv" << endl;
                cout << "---------------MENU-----------------" << endl;
                int a;
                cout << "nhap tac vu : "; cin >> a;

                if (a == 1) {
                    stt++;
                    nhapthongtin(A, stt);
                    danhsach.push_back(A);
                }
                else {
                    if (a == 2) {
                        int i;
                        cout << "Nhap so luong vdv can theo doi :"; cin >> i;
                        if (i <= stt) {
                            for (int j = danhsach.size() - 1; j >= (danhsach.size() - i); j--) {
                                xuatthongtin(danhsach[j]);

                            }
                        }
                    }
                    else {
                        if (a == 3) {
                            string ma, hoten, namsinh;
                            cout << " Nhap ma :"; cin >> ma;
                            cout << " Ho ten :"; cin >> hoten;
                            cout << " Nam sinh :"; cin >> namsinh;
                            bool find = true;
                            int index;
                            for (int i = 0; i < danhsach.size(); i++) {
                                if (danhsach[i].Ma == ma && danhsach[i].hoten == hoten && danhsach[i].namsinh == namsinh)
                                {
                                    find = true;
                                    index = i;
                                    break;
                                }
                                else
                                {
                                    find = false;
                                }
                            }
                            if (find = true)
                            {
                                xuatthongtin(danhsach[index]);
                            }
                            else
                            {
                                cout << " Not found";
                            }
                        }

                        else {
                            if (a == 4)
                            {
                                int stt;
                                cout << " nhap stt :"; cin >> stt;

                                string s;
                                cout << " co chac muon xoa khong :"; cin >> s;
                                if (s == "yes")
                                {
                                    danhsach.erase(danhsach.begin() + 2);
                                }

                            }
                            else
                            {
                                cout << "EXIT" << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            solansai++;
            cout << " Ban da nhap sai " << solansai << " lan" << endl;
            cout << " Vui long nhap lai" << endl;
        }
    }
}
