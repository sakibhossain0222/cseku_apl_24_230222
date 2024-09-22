#include <iostream>
using namespace std;

int main() {
    int n; // Number of elements in the array
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Insertion Sort algorithm
    for (int i = 1; i < n; i++) {
        int current = arr[i]; // The element to be positioned
        int j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than current, to one position ahead
        // of their current position
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the current element at its correct position
        arr[j + 1] = current;
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
