#include <iostream>
#include <math.h>
#include<vector>
using namespace std;
class solution {
public:
	vector<int> input_number;
	void input(int& n) {
		int i = 0;
		while (i < n) {
			int x; cin >> x;
			input_number.push_back(x);
			i++;
		}
	}
	void output(int n) {
		for (vector<int> ::iterator it = input_number.begin(); it != input_number.end(); it++) {
			cout << *it << endl;
		}
	}
	void find_min_number(int n) {
		int min = a[0];
		for (int i = 0; i < n; i++) {
			if (input_number[i] < min) {
				min = input_number[i]
			}
		}
		return min;
	}
	bool check_uoc_so_chung(int n, int Uocso) {
		for (int i = 0; i < n; i++) {
			if (input_number[i] % Uocso != 0) {
				return false;
			}
		}
		return true;
	}

	int find_uoc_so_max_cua - mang(int n) {
		for (int Uocso = find_min_number(n); Uocso >= 1; Uocso--) {
			if (check_uoc_so_chung(n, Uocso) == true) {
				return Uocso;
			}
		}
		return 1;
	}
};
int main() {
	int n; cin >> n;
	solution solution;
	solution.input(n);
	solution.output(n);
	solution.find_min_number(n);
	solution.check_uoc_so_chung
}