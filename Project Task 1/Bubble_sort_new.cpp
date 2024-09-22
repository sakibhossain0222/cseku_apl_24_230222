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

    int counter = 1; // Counter to track the number of passes

    // Bubble Sort algorithm
    while (counter < n) {
        // Loop through the array and perform pairwise swaps
        for (int i = 0; i < n - counter; i++) {
            // If the current element is greater than the next element, swap them
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++; // Increment the counter after each pass
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
