#include<iostream>
#include<string>
using namespace std;

// KIỂM TRA CHUỐI CON ĐÚNG THỨ TỰ CÁC CHỮ CÁI 
// VD : ABD LÀ CHUỖI CON CỦA ABBD
// ACB KHÔNG LÀ CHUỖI CON CỦA ABC VÌ ACB VÀ ABC KHÔNG SẮP XẾP ĐÚNG THỨ TỰ 
bool check(string a, string b) 
{
    if (b.length() > a.length()) 
    {
        return false;
    }
    else {
        bool check;
        int k = 0;
        for (unsigned int i = 0; i < b.length(); i++) 
        {
            for (unsigned int j = k; j < a.length(); j++) 
            {
                if (b[i] == a[j]) 
                {
                    check = true;
                    k++;
                    break;
                }
                else 
                {
                    check = false;
                }
            }
            if (check == false) 
            {
                break;
            }
        }
        if (check == true) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}
int main() {
    int n; cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        string c = "\0";
        int length_a = static_cast<int>(a.length());

        for (int i = 0; i < length_a; i++) 
        {
            if (isupper(a[i])) 
            {
                c = c + a[i];
            }
            if (islower(a[i])) 
            {
                a[i] = a[i] - 32;
            }
        }

        // KIỂM TRA XEM MẢNG CHỮ IN HOA CỦA MẢNG A (MẢNG C) CÓ LÀ CHUỖI CON CỦA MẢNG B KHÔNG ?
        if (check(b, c)) 
        {
            // KIỂM TRA MẢNG A SAU KHI IN HOA CÓ CHỨA MẢNG B KHÔNG ?
            if (check(a, b)) 
            {
                cout << "YES" << endl;
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}

