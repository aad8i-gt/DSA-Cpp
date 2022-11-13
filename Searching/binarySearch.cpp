#include <iostream>
using namespace std;

int binarySearch(int input[], int n, int val)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (val == input[mid])
            return mid;

        //  Increasing/Decreasing the size of arr
        if (input[mid] > val)
            end = mid - 1;

        else
            start = mid + 1;
    }

    return -1;
}

int main()
{
    int n = 7;
    int arr[n] = {2, 4, 8, 10, 12, 14, 54};
    int key = 4546;
    int ans = binarySearch(arr, n, key);
    if (ans == -1)
        cout << "Key not found" << endl;
    else
        cout << "Index: " << ans;
    return 0;
}