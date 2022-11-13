#include <iostream>
#include <cstring>

using namespace std;

void spiralPrint(int **a, int m, int n)
{
    //Write your code here
    int jS = 0;
    int jE = n - 1;

    int iS = 0;
    int rE = m - 1;

    int c = 1;
    int no_of_elements = m * n;

    while (c <= no_of_elements)
    {

        // first row

        if (rE >= iS && jE >= jS)
        {
            for (int z = jS; z <= jE; z++)
            {
                cout << a[iS][z] << " ";
                c++;
            }

            iS++;
        }

        // last col

        if (rE >= iS && jE >= jS)
        {
            for (int i = iS; i <= rE; i++)
            {
                cout << a[i][jE] << " ";
                c++;
            }

            jE--;
        }

        // last row

        if (jE >= jS && rE >= iS)
        {
            for (int i = jE; i >= jS; i--)
            {
                cout << a[rE][i] << " ";
                c++;
            }
        }
        rE--;
        // first col

        if (rE >= iS && jE >= jS)
        {
            for (int i = rE; i >= iS; i--)
            {
                cout << a[i][jS] << " ";
                c++;
            }
        }
        jS++;
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
    return 0;
}

// // first row
// for (int i = 0;;)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cout << a[i][j] << " ";
//     }
// }

// // last col
// for (int i = 1; i < m; i++)
// {
//     for (int j = n - 1;;)
//     {
//         cout << a[i][j] << " ";
//     }
// }

// // last row
// for (int i = m-1; ; )
// {
//     for (int j = n - 2;j>=0;j--)
//     {
//         cout << a[i][j] << " ";
//     }
// }