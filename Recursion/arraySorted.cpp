#include <iostream>
#include <cstring>

using namespace std;

bool arraySorted(int arr[], int n)
{
    int i = 0;
    if (i == n - 1)
        return true;

    bool smallP = arraySorted(arr, i + 1);
    bool ans = smallP && (arr[i] <= arr[i + 1]);

    return ans; 
}

int main()
{
    int arr[5] = {5,
                  6,
                  7,
                  8,
                  9};
    int n = 5;

    cout << arraySorted(arr, n) << " ";
    return 0;
}