#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool checktontai(int n, const vector<int>& K) {
    return find(K.begin(), K.end(), n) != K.end();
}

long long rob(int* houses, int numOfHouses) {
    multimap<int, int> k;
    for (int i = 0; i < numOfHouses; i++) {
        k.insert({ houses[i],i });
    }
    vector<int> A;
    for (pair<int, int> x : k) {
        cout << x.first << "   " << x.second << endl;;
        A.push_back(x.second);
    }
    vector<int> B;
    B.push_back(A[A.size() - 1]);
    for (int i = A.size() - 2; i >= 0; i--) {
        if (!checktontai(A[i] - 1, B) && !checktontai(A[i] + 1, B)) {
            B.push_back(A[i]);
        }
    }
    long long sum = 0;
    for (int i = 0; i < B.size(); i++) {
        for (pair<int, int> x : k) {
            if (x.second == B[i]) {
                sum += x.first;
            }
        }
    }
    return sum;
}

int main() {
    int numOfHouses;
    cout << "Enter the number of houses: ";
    cin >> numOfHouses;

    int houses[10000];

    cout << "Enter the amount of money in each house: \n";
    for (int i = 0; i < numOfHouses; i++) {
        cin >> houses[i];
    }
    cout << endl;
    cout << rob(houses, numOfHouses);

    return 0;
}
