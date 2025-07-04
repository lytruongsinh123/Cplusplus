#include<iostream>
#include<algorithm>
#include<vector>
#define MAX 100
using namespace std;


class Solution {
public:

    vector<int> K;
    vector<int> G;
    vector<int> U;
    void input(int& f) {

        for (int i = 0; i < f; i++) {
            int x; cin >> x;
            K.push_back(x);
        }
        cout << endl;
    }
    
    int largestRectangleArea(int n, int f) {
        if (n > 6) {
            return *max_element(G.begin(), G.end());
        }
        else {
            for (int i = 0; i <= f - n; i++) {
                for (int j = i; j < i + n; j++) {
                    U.push_back(K[j]);
                }
                int S = *min_element(U.begin(), U.end()) * n;
                G.push_back(S);
                U.clear();

            }
            largestRectangleArea(n + 1, f);

         }
     }
 };
int main() {
    int f;

    cin >> f;
    Solution solution;
    solution.input(f);
    int ret = solution.largestRectangleArea(1, f);
    cout << ret << endl;


    return 0;
}