#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 11;
    int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int s = 0;
    int e = s + 1;

    cout << "original/ " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        if (e < size)
        {
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;

            s = s + 2;
            e = e + 2;
        }
    }

    cout << endl;
    cout << "reverse/ " << endl;
    for (int i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }

    return 0;
}