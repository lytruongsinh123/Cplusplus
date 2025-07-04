#include<iostream>
#include<vector>
#include<map>
using namespace std;
class solution {
public :
	vector<int> height;
	map<int, int> value;
	void input(int& n) {
		int i = 0; 
		while (i < n) {
			int x; cin >> x;
			height.push_back(x);
			i++;

		}
	}
	void output(int n) {
		for (vector<int> ::iterator it = height.begin(); it != height.end(); ++it) {
			cout << *it << "   ";
		}
		cout << endl;
	}
	int theFirst( int n) {
		for (int i = 0; i < n; i++) {
			if (height[i] != 0)
				return i;
				break;
		}
		cout << endl;
	}
	void valu(int n) {
		for (int i = 0; i < n; i++) {
			value[i] = height[i];
		}
		for (pair<int, int> x : value) {
			cout << x.first << "    " << x.second << endl;
		}
		cout << endl;
		
	}
	void swap(int &m, int &n) {
		int temp = m;
		m = n;
		n = temp;
	}
	void sort(int n) { 
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (height[j] < height[i]) {
					swap(height[i], height[j]);
				}
			}
		}
		cout << height[n - 1] << endl;
		cout << height[n - 2] << endl;
	}

	void trap(vector<int> height, int n) {
		for (int k = theFirst (n); k < n; k++) {

		}
	}

};
int main() {
	int n;
	cout << " nhap so phan tu : "; cin >> n;
	solution solute;
	solute.input(n);
	solute.output(n);
	solute.valu(n);
	solute.sort(n);
}