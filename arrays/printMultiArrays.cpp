#include <iostream>
#include <cstring>

using namespace std;
void print2DArray(int **a, int row, int col)
{
    // Write your code here
    int i = 0;
    int n = row;

    while (i < row)
    {
        while (n > 0)
        {
            int j = 0;

            while (j < col)
            {
                cout << a[i][j] << " ";
                j++;
            }

            cout << endl;
            n--;
        }
        i++;
        n = row - i;
    }
}

int main()
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
    print2DArray(input, row, col);
    return 0;
}
