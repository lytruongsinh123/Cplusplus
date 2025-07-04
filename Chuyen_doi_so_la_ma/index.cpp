#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Nhập số La Mã: ";
    cin >> s;
    unordered_map<char, int> trans = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D', 500}, {'M',1000}};
    int index = s.length()-2;
    int same = 0;
    int sum = 0;
    if (index >= 0) {
        for(int i = index; i >= 0; i--) {
            if(trans[s[i]] >= trans[s[i+1]]) {
                sum = sum +  trans[s[i+1]] + trans[s[i]] - same;
                same = trans[s[i]];
            } else {
                sum = sum + trans[s[i+1]] - trans[s[i]] - same;
                same = trans[s[i]];
            }
        }
    } else {
        sum = trans[s[0]];
    }
        cout << sum << endl;
    return 0;
}
