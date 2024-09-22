#include <iostream>
using namespace std;
int search(int f, int n, int arr[])
{

    for (int i = 0; i < n; i++)
    {
        if (f == arr[i])
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int a;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    int f;
    cin >> f;
    cout << search(f, a, ar);

    return 0;
}