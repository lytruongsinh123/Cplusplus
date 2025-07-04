#include <iostream>

using namespace std;

int find_min(int* array, int n) {
    int min_value = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }
    return min_value;
}

int main() {
    int array[] = { 10, 5, 2, 1, 3 };
    int n = sizeof(array) / sizeof(array[0]);

    int min_value = find_min(array, n);
    cout << "Giá trị nhỏ nhất là: " << min_value << endl;

    return 0;
}
