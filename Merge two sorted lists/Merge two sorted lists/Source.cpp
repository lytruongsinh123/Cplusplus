#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution {
public :
	vector<int> list1;
	vector<int> list2;
	void input(int& n, int &m) {
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			list1.push_back(x);
		}
		cout << endl;

		for (int i = 0; i < m; i++) {
			int y; cin >> y;
			list2.push_back(y);
		}
	}
	void merge (int &n) {




















		for (int i = 0; i < n; i++) {
			list2.push_back(list1[i]);
		}
    }
	void sort(int &n, int &m) {
		for (int i = 0; i < n + m - 1; i++) {
			for (int j = i + 1; j < n + m; j++) {
				if (list2[j] < list2[i])
					swap(list2[j], list2[i]);
			}
		}
		for (int i = 0; i < m + n; i++) {
			cout << list2[i] << "  ";
		}
	}
};
int main() {
	int m, n;
	cout << " nhap size list1 : "; cin >> n;
	cout << " nhap size list2 : "; cin >> m;
	solution K;
	K.input(n, m);
	K.merge(n);
	K.sort(n, m);
}