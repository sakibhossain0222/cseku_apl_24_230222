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
    for (int i = 1; i < a; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j]>current)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}