#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int* arr = new int[num];

    // Input elements
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    // Print in reverse order
    for (int i = num - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
