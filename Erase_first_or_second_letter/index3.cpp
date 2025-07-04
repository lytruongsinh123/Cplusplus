#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> c;
vector<int> x;
int K;


void input(int k) {
	for (int i = 0; i < k; i++) {
		char t;
		cin >> t;
		c.push_back(t);
	}
}

void Try(int k) {
	if (k == 0) {

}
	for (int i = 0; i < k; i++) {
		int index = x[i];
		x.erase(x.begin() + i);
		Try(k-1);
		x.insert(x.begin() + i, index);
		k++;

	}
}