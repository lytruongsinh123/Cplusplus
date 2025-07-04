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
	bool check(int K) {
		
			
			for (int i = 1; i < K - 1; i++)
			{
				if ((X[i] < X[i - 1] && X[i] > X[i + 1]) || (X[i] > X[i - 1] && X[i] < X[i + 1]))
				{
					return false;
					break;
				}
			}
			return true;
		
	}
	
	
};
int main() {
	Solution solution;
	int K;
	cin >> K;
	solution.input(K);
	if (solution.check(K)) cout << " mang dang song";
	else cout << " mang ko co dang song ";

	return 0;
}