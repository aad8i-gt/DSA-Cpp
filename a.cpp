#include <iostream>
#include <cstring>

using namespace std;

void spiralPrint(int **a, int m, int n)

{

    int jS = 0;
    int jE = n;
    int iS = 0;
    int rE = m;

    int c = 0;
    int no_of_elements = m * n;

    while (c < no_of_elements )
    {

        // first row
        for (int z = jS; z < jE; z++)
        {
            cout << a[iS][z] << " ";
            c++;
        }

        iS++;

        // last col
        for (int i = iS; i < rE; i++)
        {
            cout << a[i][jE-1] << " ";
            c++;
        }

        jE--;

        // last row

        for (int i = jE; jE > jS; i--)
        {
            cout << i << endl;
            cout << a[rE][i] << " ";
            c++;
        }

        rE--;

        // first col

        for (int i = rE-1; i > iS; i--)
        {
            cout << a[i][jS] << " ";
            c++;
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

