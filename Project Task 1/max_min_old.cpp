#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <string>
using namespace std;
int main()
{
    int Max= INT_MIN;
    int Min = INT_MAX;
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < 5; i++)
    {
        Max= max(Max,ar[i]);
        Min = min(Min,ar[i]);

    }
    cout << Max<< endl<<Min ;
    
    

    return 0;
}