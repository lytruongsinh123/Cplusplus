#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> strs;
    string ans = "";
    for(int i = 0; i < 3 ; i++) {
        cout << "Enter string" << " ";
        string str; cin >> str;
        strs.push_back(str);
    }
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size()-1];
    for(int i = 0; i < min(first.size(), last.size()); i++) {
        if(first[i] != last[i]) {
            cout << "Khong co phan tu chung" << endl;
        }
        else {
            ans += first[i];
        }
    }
}