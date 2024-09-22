#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int counter = 1;
    while (counter < a)
    {
        for (int i = 0; i < a - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        counter++;
    }
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}