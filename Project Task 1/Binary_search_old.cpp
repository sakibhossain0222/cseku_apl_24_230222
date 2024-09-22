#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int search(int arr[], int length, int key)
{
    int s = 0, e = length, mid;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << search(arr, n, key);

    return 0;
}