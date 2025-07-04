#include<iostream>
#include<algorithm>
#include<vector>
#define MAX 100
using namespace std;

class solution {
	
public : 
	vector<int> a;
	
	void input(int &n) {
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.push_back(x);
		}
	}
	void swap(int m, int n) {
		int temp = m;
		m = n;
		n = temp;
	}
	void sort( int &n) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[j] > a[i])
					swap(a[j], a[i]);
			}
		}
	}
	// linear search do phuc tap O(n)
	bool linear_search(int a[], int x) {
		for (int i = 0; i < 5; i++) {
			if (a[i] == x) return true;
		}
		return false;
	}
	// bianary search do phuc tap O(logn)
	// dieu kien : cac phan tu trong mang phai duoc sap xep
	bool bianery_search(int a[], int n, int x) {
		int lef = 0, rig = n - 1;
		while (lef <= rig) {
			int mid = (lef + rig) / 2;
			if (a[mid] == x) {
				return true;
			}
			else if (a[mid] < x) {
				lef = mid + 1;
			}
			else {
				rig = mid - 1;
			}
		}
		return false;
	}
	bool bs_dequy( int lef, int rig, int& x) {
		if (lef > rig)
			return false;
		int mid = (lef + rig) / 2;
		if (a[mid] == x)
			return true;
		else if (a[mid] < x)
			return bs_dequy( mid + 1, rig, x);
		else
			return bs_dequy(  lef, mid - 1, x);
	}
};
int main() {
	int n, x; cin >> n >> x;
	solution bs;
	bs.input(n);
	bs.sort( n);
	if (bs.bs_dequy(0, n - 1, x)) cout << " found";
	else cout << " not found";
}