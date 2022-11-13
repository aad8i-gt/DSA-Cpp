#include <iostream>
#include <cstring>

using namespace std;

/*int func(int a[])
{}

*/

void printArray(int in[], int n)
{
    // int size = sizeof(in) / 4;
        /*this will not work since only 
        address of 0th element is passed
        that's why we've to pass size explicity*/

    for (int i = 0; i < n; i++)
    {
        cout << in[i] << " ";
    }
}

int main()
{
    int N;
    cin >> N;
    //int b[10];
    //passing array as arg:
    //function(b);

    int arr[100];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // cout << sizeof(arr);

    printArray(arr, N);

    return 0;
}