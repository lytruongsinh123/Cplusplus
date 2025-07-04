#include<iostream>
using namespace std;
using ll = long long;
int main() {
	string s; cin >> s;
	int n = s.size() - 1;
	while (n >= 0) {
		if (s[n] == '1') {
			s[n] = '0';
			n--;
		}
		if (s[n] == '0') {
			s[n] = '1';
			cout << s << endl;
			n = s.size() - 1;
		}
	}
	return 0;
}