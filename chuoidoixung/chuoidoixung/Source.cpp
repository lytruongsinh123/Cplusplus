// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool check(string& s) {
    string a;
    a = s;
    int n = static_cast<int> (s.length());
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    cout << s << endl;
    return (a == s);
}
int main() {
    string s; cin >> s;
    if (check(s)) cout << "YES";
    else cout << "NO";
}
