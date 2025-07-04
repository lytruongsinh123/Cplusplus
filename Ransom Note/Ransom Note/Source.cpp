#include <iostream>
#include <vector>
#include <map>

using namespace std;

class solution {
public :
	vector<char> ransomNote;
	vector<char> magazine;
	map<char, int> N1;
	map<char, int> N2;

	void input1(int& n) {
		for (int i = 0; i < n; i++) {
			char x; cin >> x;
			ransomNote.push_back(x);

		}
		cout << endl;
	}
	void input2(int &m) {
		for (int i = 0; i < m; i++) {
			char y; cin >> y;
			magazine.push_back(y);
		}
	}
    
	bool count(int &n, int &m) {

		if (n > m) return false;

		for (int i = 0; i < n; i++) {
			N1[ransomNote[i]]++;
		}

		for (int i = 0; i < m; i++) {
			N2[magazine[i]]++;
		}
		for (int i = 0; i < n; i++) {
			cout << " T : " << N1[ransomNote[i]] << endl;
			cout << " G : " << N2[ransomNote[i]] << endl;
			if (N1[ransomNote[i]] > N2[ransomNote[i]]) return false;
			}
		return true;
		}
	
};
int main() {
	solution K;
	int n, m;
	cout << " nhap size cua ransomNote :"; cin >> n;
	cout << " nhap size cua magazine : "; cin >> m;
	K.input1(n);
	K.input2(m);
	if (K.count(n, m) == true) cout << "True" << endl;
	else cout << "False" << endl;

}