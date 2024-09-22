#include <iostream>
using namespace std;

// Function to perform linear search on an array
int linearSearch(int key, int size, int arr[]) {
    // Loop through the array to find the key
    for (int i = 0; i < size; i++) {
        // If the key is found, return the 1-based index position
        if (key == arr[i]) {
            return i + 1; // Return index + 1 for 1-based position
        }
    }
    // Return -1 if the key is not found
    return -1;
}

int main() {
    int n; // Number of elements in the array
    cin >> n; // Input the size of the array

    int arr[n]; // Declare an array of size n
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key; // The element to be searched
    cin >> key; // Input the search key

    // Call the linearSearch function and output the result
    int result = linearSearch(key, n, arr);
    if (result != -1) {
        cout << "Element found at position: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
