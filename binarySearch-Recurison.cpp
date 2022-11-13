#include <iostream>
#include <cstring>

using namespace std;

int isSorted(int arr[], int size, int k)
{
    if (size == 0 || size == 1)
        return 1;

    if (arr[0] > arr[1])
        return -1;

    else
        isSorted(arr + 1, --size, k);
}

bool binarySearch(int *a, int s, int e, int k)
{

    if (s > e)
        return false;

    int mid = (s + e) / 2;

    if(a[mid] == k)
        return true;
        // return mid;

    if (a[mid] < k)
        return binarySearch(a, mid + 1, e, k);

    if (a[mid] > k)
        return binarySearch(a, s, mid - 1, k);
}
int main()
{
    int arr[5] = {2, 4, 10, 110, 150};
    int key = 4;
    int size = 5;

    // int s = 0;
    // int e = 4;

    cout << isSorted(arr, size, key) << endl;
    cout << binarySearch(arr, 0, 4, key) << endl;
    return 0;
}