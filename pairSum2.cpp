#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    int x[size] = {1, 2, 3, 4, 5};
    int sumKey = 5;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (x[i] + x[j] == sumKey)
                {cout << x[i] << "," << x[j] << endl;}
        }
    }

    return 0;
}