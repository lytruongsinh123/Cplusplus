#include<iostream>
#include<vector>
using namespace std;
    int K;
	vector<int> arr;
	vector<int> X;
void input() {

	for (int i = 0; i < K; i++) {
		int x;
		cin >> x;
		X.push_back(x);
	 }
	cout << endl;
 }
void output() {
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
		cout << *it << " ";
 }
void insert(int x) {
	X.push_back(x);
	
	swap(X[0], X[X.size()]);
}
void Try(int i,int K) {
	if (K == 0) {
		output();
	}
	for (int j = 0; j <= K - 1; j++) {
		int temp = X[j];
            arr.push_back(X[j]);
			X.erase(X.begin());
			
			Try(i,K-1);
			// backtracking
			
			insert(temp);
			arr.erase(arr.end() - 1);
           }
        }
int main() {
	cin >> K;
	input();
	Try(0,K);
	
	return 0;
}