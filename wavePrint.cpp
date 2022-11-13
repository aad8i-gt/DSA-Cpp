#include <iostream>
using namespace std;

void wavePrint(int **a, int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << a[i][j] << " ";
            }
        }

        else
        {
            for (int i = m-1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }
        wavePrint(input, row, col);
        cout << endl;
    }
    return 0;
}