#include <iostream>
#include <string>
using namespace std;
string chuanhoa(string a) {
    // Dua tat ca ve chu in thuong 
    for (int i = 0; i < a.length(); i++) {
        if (isupper(a[i])) {
            a[i] = tolower(a[i]);
        }
    }
    // Xoa dau cach dau tien
    while (1) {
        if (!a.empty() && a[0] == ' ') {
            a.erase(0, 1);
        }
        else {
            break;
        }
    }
    // Xoa dau cach giua
    for (int i = 0; i < a.length(); i++) {
        while (a[i] == ' ' && a[i + 1] == ' ') {
                a.erase(i, 1);
            }
        }
    // Viet hoa chu cai dau tien 
    a[0] = toupper(a[0]);
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ' && a[i + 1] != ' ') {
            a[i + 1] = toupper(a[i + 1]);
        }
    }

    return a;
}
int main() {
    string a;
    getline(cin, a);
    cout << chuanhoa(a) << endl;
}
    

