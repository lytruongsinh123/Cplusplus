#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;

class Solution {

public:
	
	vi X;
	void input(int K) {

		for (int i = 0; i < K; i++) {
			int x;
			cin >> x;
			X.push_back(x);
		}
		cout << endl;
	}
	void swap(int &m, int &n) {
		int temp = m;
		m = n;
		n = temp;
	}
	void arrange(int K) {
		for (int i = 0; i < K - 1; i++) {
			for (int j = i + 1; j < K; j++) {
				if(X[j] < X[i])  
					swap(X[i], X[j]);
			}
		}
	}
	void output() {
		for (vector<int>::iterator it = X.begin(); it != X.end(); ++it)
			cout << *it << "   ";
	}
};
int main() {
	Solution solution;
	int K;
	cin >> K;
	solution.input(K);
	solution.arrange(K);
	solution.output();

	return 0;
}