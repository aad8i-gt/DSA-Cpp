#include <iostream>
using namespace std;
void findLargest(int **a, int m, int n)
{
    //Write your code here
    int row[m];
    int col[n];

    if (m >= 0 && m <= 1e3 && n >= 0 && n <= 1e3)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        // sum of columns
        for (int j = 0; j < n; j++)
        {
            int sumCol = 0;
            for (int i = 0; i < m; i++)

            {
                sumCol = sumCol + a[i][j];
            }

            col[j] = sumCol;
        }

        // sum of rows
        for (int i = 0; i < m; i++)
        {
            int sumRow = 0;
            for (int j = 0; j < n; j++)

            {
                sumRow = sumRow + a[i][j];
            }

            row[i] = sumRow;
        }

        // max from rows
        int max_Rows = -2147483648;
        int index_rows;

        for (int i = 0; i < m; i++)
        {
            if (row[i] > max_Rows)
            {
                max_Rows = row[i];
                index_rows = i;
            }
        }

        // max from col
        int max_col = -2147483648;
        int index_col;

        for (int i = 0; i < n; i++)
        {
            if (col[i] > max_col)
            {
                max_col = col[i];
                index_col = i;
            }
        }

        if (max_col > max_Rows)
        {
            cout << "column"
                 << " " << index_col << " " << max_col << endl;
        }

        else if (max_col <= max_Rows)
        {
            cout << "row"
                 << " " << index_rows << " " << max_Rows << endl;
        }

    }
}
int main()
{

    int a[100][100];

    int m, n;
    cin >> m >> n;
    int row[m];
    int col[n];

    return 0;
}