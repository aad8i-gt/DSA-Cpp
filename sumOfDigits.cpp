#include <iostream>
#include <cstring>

using namespace std;

int sum(int a[], int size)
{
    if (size == 0 || size == 1)
        return a[0];

    int smallProblem = sum(a + 1, --size);

    int ans = a[0] + smallProblem;
    return ans;
}
int main()
{
    int arr[5] = {12, 10, 11, 12, 10};
    cout << sum(arr, 5);

    return 0;
}