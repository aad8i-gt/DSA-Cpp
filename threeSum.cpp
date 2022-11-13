#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 10;
    int x[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumKey = 12;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (x[i] + x[j] + x[k] == sumKey)
                {
                    cout << x[i] << "," << x[j] << "," << x[k] << endl;
                    count++;
                }
            }
        }
    }
    cout << "count/ " << count << endl;

    return 0;
}