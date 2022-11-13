#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 5;
    int x[size] = {1, 0, 3, 2, 2};
    

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (x[i] == x[j])
            {
                cout << x[i] << endl;
                break;
            }
        }
    }

    return 0;
}