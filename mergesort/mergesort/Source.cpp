#include <iostream>
#include<vector>
using namespace std;
vector<int> merge;
void merge_array(int a[], int b[], int n, int m) {
    int i = 1;
    int j = 1;
    while (i <= n && j <= m) {
        if (a[i] < b[j]) {
            merge.push_back(a[i]);
            i++;
        }
        else {
            merge.push_back(b[j]);
            j++;
        }
    }
}
int main() {
    int n; cin >> n;
    int m; cin >> m;
    int a[100];
    int b[100];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    merge_array(a, b, n, m);
    for (int i = 0; i < merge.size(); i++) {
        cout << merge[i] << " ";
    }

    return 0;
}