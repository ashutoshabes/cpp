#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter N and K: ";
    cin >> n >> k;

    int arr[1000];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i += 2 * k) {
        for (int j = 0; j < k; j++) {
            int temp = arr[i + j];
            arr[i + j] = arr[i + k + j];
            arr[i + k + j] = temp;
        }
    }

    cout << "Array after swapping every K elements with the next K elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} 
