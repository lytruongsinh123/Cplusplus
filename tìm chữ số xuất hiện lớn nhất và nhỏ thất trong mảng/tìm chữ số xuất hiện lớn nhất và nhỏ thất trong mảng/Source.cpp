#include <iostream>
#include <map>
#include <vector>

#define MAX 100
using namespace std;

class solution {
public : 
	vector<int> number;
	vector<int> input_number;

	vector<int> T;
	map<int, int> G;
	int b[10] = { 0 };

	void input(int &K) {
		for (int i = 0; i < K; i++) {
			int x; cin >> x;
			input_number.push_back(x);
	    }
	} 
	void cout_number1( int K) {
		for (int i = 0; i < K; i++) {
			int k = abs(input_number[i]);
			while (k != 0) {
				int chu_so = k % 10;
				k /= 10;
				G[chu_so]++;
			}
		}
		for (pair<int, int> x : G) {
			cout << x.first << "   " << x.second << endl;
		}
	}
	
	
	int least_appear_number1() {
		int chu_so_min = abs(input_number[0] % 10);
		for (int i = 0; i < 10; i++) {
			if (b[i] != 0) {
				chu_so_min = (b[chu_so_min] < b[i]) ? chu_so_min : i;
			}
		}
		return chu_so_min;
	}
};
int main() {
	int K; cin >> K;
	solution solute;
	solute.input(K);
	solute.cout_number1(K);
	
	


	

}