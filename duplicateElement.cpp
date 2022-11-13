#include <iostream>
#include <cstring>

using namespace std;

int duplicateNumber(int *arr, int size)
{
    int dup = 0;
    for (int i = 0; i < size - 1; i++)
    {

        dup = arr[i];
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (dup == arr[j])
            {
                return dup;
            }
        }
    }
}

int main()
{

    return 0;
}