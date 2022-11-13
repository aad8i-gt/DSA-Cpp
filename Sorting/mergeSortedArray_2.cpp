#include <iostream>
#include <cstring>

using namespace std;

void mergeArray(int a[], int n1, int b[], int n2)
{
    int size = n1 + n2;
    int c[size];

    // pointers
    int i = 0; // a
    int j = 0; // b
    int k = 0; // c

    while (k < size)
    {
        // if (i < n1 || j < n2)
        // {
        if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }

        else if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }

        if (i == n1 - 1)
        {
            c[k] = b[j];
            j++;
            k++;
        }

        if (j == n2 - 1)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{

    int n1 = 5;
    int n2 = 5;
    int a[n1] = {1, 2, 10, 11, 15};
    int b[n2] = {3, 5, 7, 14, 41};

    mergeArray(a, n1, b, n2);

    return 0;
}