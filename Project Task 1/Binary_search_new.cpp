#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int length, int key) {
    int start = 0, end = length - 1, mid; // Initialize start, end, and mid indices

    // Loop until the start index is less than or equal to the end index
    while (start <= end) {
        mid = (start + end) / 2; // Calculate the mid index
        
        // Check if the mid element is the key
        if (arr[mid] == key) {
            return mid; // Return the index if the key is found
        }
        // If the mid element is greater than the key, search the left half
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        // If the mid element is less than the key, search the right half
        else {
            start = mid + 1;
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int n; // Number of elements in the array
    cin >> n; // Input the number of elements

    int arr[n]; // Declare an array of size n
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key; // The element to be searched
    cin >> key; // Input the search key

    // Call the binarySearch function and output the result
    int result = binarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
