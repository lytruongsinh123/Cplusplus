#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1000
using namespace std;
typedef vector<int> vi;

class solution {
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

    bool check(int K, int& d) {
        d = X[1] - X[0];
        for (int i = 0; i < K - 1; i++) {
            
            if ((X[i + 1] - X[i]) != d) {
                return false;
                break;
            }
        }
            return true;
        
    }
};

int main() {
    solution solute;
    int K, d;
    cin >> K;
    solute.input(K);

    if (solute.check(K, d)) {
        cout << "day cap so cong";
    }
    else {
        cout << "khong phai day cap so cong";
    }

    return 0;
}
