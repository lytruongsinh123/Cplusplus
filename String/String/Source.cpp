#include<iostream>
#include<string>
#include<vector>
#include<cctype>
#include<algorithm>

using namespace std;





void check1(string s2, string s1, int& k) {

    for (int i = 0; i < static_cast<int>(s2.length()); i++) {
        for (int j = 0; j < static_cast<int>(s1.length()); j++) {
            if (s2[i] == (char)toupper(s1[j])) {
                k = j;
                cout << k << " ";
                if (j == k) continue;
            }
        }


    }
}


bool check2(string s1, int k) {
    return all_of(s1.begin() + k + 1, s1.end(), [](char c) { return !isupper(c); });
}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int k;

    check1(s2, s1, k);
    if(check2(s1, k))
        cout << "YES";
    
    
    

}