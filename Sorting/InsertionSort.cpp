#include <iostream>
#include <cstring>

using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;

        // comparing & shifting
        for (; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size = 8;
    int arr[size] = {10, 5, 3, 15, 4, 10, 11, 2};

    InsertionSort(arr, size);
    return 0;
}