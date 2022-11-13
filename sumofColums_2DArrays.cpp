#include <iostream>
using namespace std;

int main()
{

    int a[100][100];

    int m, n;
    cin >> m >> n;

    if (m >= 1 && m <= 1e3 && n >= 1 && n <= 1e3)
    {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> a[i][j];
                }
            }

            for (int j = 0; j < n; j++)
            {
                int sum = 0;
                for (int i = 0; i < m; i++)

                {
                    sum = sum + a[i][j];
                }

                cout << sum << " ";
            }
    }

    return 0;
}