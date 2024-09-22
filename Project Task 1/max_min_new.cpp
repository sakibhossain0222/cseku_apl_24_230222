#include <iostream>
#include <climits> // Include for INT_MIN and INT_MAX
using namespace std;

int main() {
    int maxValue = INT_MIN; // Initialize maxValue to the smallest possible integer
    int minValue = INT_MAX; // Initialize minValue to the largest possible integer

    int arr[5]; // Declare an array of size 5

    // Input the elements of the array
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Find the maximum and minimum values in the array
    for (int i = 0; i < 5; i++) {
        maxValue = max(maxValue, arr[i]); // Update maxValue if the current element is larger
        minValue = min(minValue, arr[i]); // Update minValue if the current element is smaller
    }

    // Output the maximum and minimum values
    cout << "Maximum value: " << maxValue << endl;
    cout << "Minimum value: " << minValue << endl;

    return 0;
}
