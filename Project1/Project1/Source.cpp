#include<iostream>
#define MAX 1000
#include<map>
using namespace std;
int main() {
    int m, n, Q;
    int a[MAX][MAX];
    int b[MAX][MAX];
    map<int, int> mp;
    cin >> m >> n >> Q;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= Q; ++i) {
        int x, y;
        cin >> x >> y;
        mp[x] = y;
    }
    for (auto x : mp) {
        cout << a[x.first][x.second] << endl;
    }
    return 0;
}