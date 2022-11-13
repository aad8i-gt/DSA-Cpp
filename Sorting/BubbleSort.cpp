#include <iostream>
#include <cstring>

using namespace std;

void BubbleSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (input[i] > input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << input[j] << " ";
    }
}

int main()
{
    int n = 10;
    int arr[n] = {21, 4, 7, 87, 5, 44, 0, 2, 0, 5};

    BubbleSort(arr, n); 

    return 0;
}