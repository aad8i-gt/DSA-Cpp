#include <iostream>
using namespace std;

void InsertionSort(int input[], int n)
{
    int index_minimum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int minimumElement = input[i]; //21
        // /*(or)*/ index_minimum = i;
        int ans = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (minimumElement > input[j])
            {
                minimumElement = input[j]; //4
                index_minimum = j;   
                ans = 1;    //2            // 21, 4, 7, 87, 5
            }
        }

        if(ans == 1)
        {
            int temp = input[i];             //21
            input[i] = input[index_minimum]; //0, 4
            input[index_minimum] = temp;
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << input[j] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[n] = {21, 4, 7, 87, 5};
    // 44, 0, 2, 0, 5
    InsertionSort(arr, n);
    return 0;
}