#include <iostream>

using namespace std;

int binary_search(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int index = binary_search(arr, 0, n - 1, x);

    if (index == -1) {
        cout << "Không tìm thấy giá trị x trong mảng." << endl;
    }
    else {
        cout << "Giá trị x nằm ở vị trí thứ " << index << " trong mảng." << endl;
    }

    return 0;
}
