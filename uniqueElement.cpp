#include <iostream>
using namespace std;

//using XOR approach
int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
        ans = ans ^ arr[i];

    return ans;
}
/*
int findUnique(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = -1;
                arr[j] = -1;
            };
        };
    }

    int k = 0;
    for (int j = 0; j < size; j++)
    {
        k = arr[j];
        if (k >= 0)
        {
            return k;
        }
    }
}

*/
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}