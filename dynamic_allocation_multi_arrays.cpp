#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int **p = new int *[10]; // rows

    for (int i = 0; i < 10; i++)
    {
        /* int* */ p[i] = new int[20]; // col
        for (int j = 0; j < 20; j++)
        {
            cin >> p[i][j];
        }
    }

    // deallocation of memory
    for (int i = 0; i < m; i++)
    {
        delete[] p[i]; // cols
    }

    delete[] p; 

    return 0;
}