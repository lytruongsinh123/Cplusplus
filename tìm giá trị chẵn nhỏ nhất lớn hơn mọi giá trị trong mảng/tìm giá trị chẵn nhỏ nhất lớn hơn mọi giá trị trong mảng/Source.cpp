#include<iostream>
#include<vector>
#define MAX 1000
using namespace std;
class solution {
public :
	vector<int> K;
	void input(int &n) {
		
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			K.push_back(x);
		}
	}
	void output() {
		for (vector<int>::iterator it = K.begin(); it != K.end(); it++) {
			cout << *it << endl;
		}
	}

	int find(int n ) {
		for (int i = 0; i < n; i++) {
			if (K[i] % 2 != 0) {
				return i;
			}
		}
		return -1;
	}
	int find_odd_min( int n) {
		int min_le = K[find(n)];
		for (int i = find(n) + 1; i < n; i++) {
			if (K[i] % 2 != 0 && K[i] < min_le) {
				min_le = K[i];
			}
		}
		return min_le;
	}
	int  Max_number(int n) {
		int max = K[0];
		for (int i = 0; i < n; i++) {
			max = (K[i] > max) ? K[i] : max;
		}
		return max;
	}
};

int main() {
	int n; cin >> n;
	solution solute;
	solute.input(n);
	solute.output();
	int t = solute.find_odd_min(n);
	int k = solute.Max_number(n);
	cout << solute.find_odd_min(n) << solute.Max_number(n) << endl;
	if (t > k)
		cout << "  find min odd number that bigger than every value";

	else
		cout << " not find ";
	return 0;
}
	

