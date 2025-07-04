#include<iostream>
#include<string>
using namespace std;
int main() {
	string a; 
	getline(cin, a);
	int n; cin >> n;
	int i = a.length() - n ;
	cout << "chuoi phai co n phan tu : ";
	for (int j = i; j < a.length(); j++) {
		cout << a[j];
	}
	cout << endl;
	cout << "chuoi trai co n phan tu :";
	for (int j = 0; j < n; j++) {
		cout << a[j];
	}
}