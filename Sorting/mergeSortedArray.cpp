#include <iostream>
#include <cstring>

using namespace std;

void mergeArray(int a[], int n1, int b[], int n2)
{
    int size = n1 + n2;
    int c[n1 + n2];
    int i = 0;
    int j = 0;
    int count = 0;

    for (int z = 0; z < n1; z++, count++)
    {
        c[count] = a[z];
    }

    for (int z = 0; z < n2; z++, count++)
    {
        c[count] = b[z];
    }

    for (int i = 1; i < size; i++)
    {
        int current = c[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if (current < c[j])

            {
                c[j + 1] = c[j];
            }

            else
            {
                break;
            }
        }
        c[j + 1] = current;
    }

    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int n1 = 5;
    int n2 = 7;
    int a[n1] = {1, 2, 10, 11, 15};
    int b[n2] = {3, 5, 7, 14, 41, 87, 25};

    mergeArray(a, n1, b, n2);
    return 0;
}