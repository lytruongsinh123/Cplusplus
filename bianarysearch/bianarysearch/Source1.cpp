#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<string>
#include<unordered_map>
#include<vector>
#include<utility>
#include<stack>
#include<string>
#include<sstream>
#define MAX 100

using namespace std;
// * map
// (key, value)
// insert 
// find
// erase
// pair<datatype, datatype> x
// mulimap

// * vector
// push_back
// v.size
// for each
// v.empty : check vector co rong khong
// v.clear
// v.insert(iterater, so muon chen)
// v.erase(iterater, số chữ số muốn xóa) 
// v.pop_back : xoa phan tu o cuoi
// v.assign : gan phan tu trong vecto voi cung 1 gia tri

// * pair
// make_pair

// * stack 
// push
// pop
// top
// size
// empty
// O(1)
class solution{

public :
	pair<int, int> p;
	vector<int> v;
	map<int, int> mp;
	map<int, int> s;
	map<string, int> G;
	multimap<int, int > mk;
	void output() {
		
		mp[100] = 200;// (key : 100, value : 200)
		mp[400] = 100;
		mp[300] = 1000;
		mp.insert({ 400,500 });
		mp.erase(100);
		if (mp.find(200) != mp.end()) cout << " found ";
		for (pair<int, int> x : mp)
			cout << x.first << "  " << x.second << endl;
	}
	void dem_so_lan_xuat_hien_cua_phan_tu_mang() {
		for (int i = 0; i < 5; i++) {
			int x; cin >> x;
			s[x]++;
		 }

		for (pair<int, int> x : s) {
			cout << x.first << "   " << x.second;
	     }
	 }
	// kiem tra chuoi bat ky xuat hien bao nhieu lan
	void tttt() {
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			string s; getline(cin, s);
			G[s]++;
		}
		// chuoi co tan so xuat hien lon nhat
		int max_fre = 0;
		string res;
		for (pair<string, int> x : G) { 
			cout << x.first << "   " << x.second << endl;
			if (x.second >= max_fre) {
				max_fre = x.second;
				res = x.first;
				
			 }
	     }
		cout << res <<"   " << max_fre << endl;
	 }
	void multy_map() {
		mk.insert({ 1,100 });
		mk.insert({ 2,100 });
		mk.insert({ 1,500 });
		for (pair<int, int> x : mk) {
			cout << x.first << "   " << x.second << endl;
		 }
	 } 
	void input() {
		for (int i = 0; i < 5; i++) {
			int x; cin >> x;
			v.push_back(x);
		 }
		v.clear(); // xoa toan bo
		if (v.empty()) cout << " EMPTY\n";
		else cout << " NOT EMPTY\n";
		v.insert(v.begin() + 2, 100); // 100 : so muon chen
		v.erase(v.begin() + 4);
		v.pop_back(); // xoa cuoi
		v.assign(5, 100);
	 }
	// PAIR
	void ham_pair() {
		pair<int, int> u = make_pair(10, 20);
		cout << u.first << "  " << u.second;
		int n; cin >> n;
		pair<int, int> a[MAX];
		for (int i = 0; i < n; i++) {
			cin >> a[i].first >> a[i].second;
		 }
	 }

	void ham_stack() {
	
		stack<int> st;
		int n; cin >> n;
		stack<int> t;
		st.push(1);
		st.push(2);
		st.push(3);
		cout << st.top() << endl;  // st.top = 3 
		st.pop(); // đẩy 3 ra stack
		cout << st.top() << endl; // st.top = 2
		cout << st.size() << endl; // st.size = 2
		if (st.empty()) {
			cout << " empty ! ";
		}
		else cout << " not empty ! ";
		while (n != 0) {
			t.push(n % 2);
			n /= 2;
		}
		while (!t.empty()) {
			cout << t.top();
			t.pop();
		 }

		string s; getline(cin, s);
		stringstream ss(s);
			string token;
			stack<string> k;
			while (ss >> token) {
				k.push(token);
				 }
			while (k.empty()) {
				cout << k.top() << "  ";
				k.pop();
			 }
	 }
 };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solution K;
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
	K.input();
    K.output();
	K.dem_so_lan_xuat_hien_cua_phan_tu_mang();
	K.tttt();
}