#include <iostream>

using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{ 
    int n;
    cout << "Enter arraySize: ";
    cin >> n;

    int arr[n];
    cout << "Enter arrayElements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter keyToSearch: ";
    cin >> key;

    cout << "Answer: " << LinearSearch(arr, n, key);

    return 0;
}