#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N >= 0 && N <= 49)
    {

        int N1 = (N + 1) / 2;
        int N2 = N / 2;
        int i = 1;

        while (i <= N1)
        {
            int j = 1;
            while (j <= N1 - i)
            {
                cout << " ";
                j++;
            }

            j = 1;
            while (j <= i)
            {
                cout << "*";
                j++;
            }

            j = 1;
            while (j <= i - 1)
            {
                cout << "*";
                j++;
            }

            cout << endl;
            i++;
        }

        i = 1;
        while (i <= N2)
        {
            int j = 1;
            while (j <= i)
            {
                cout << " ";
                j++;
            }

            j = 1;
            while (j <= N2 - i + 1)
            {
                cout << "*";
                j++;
            }

            j = 1;
            while (j <= N2 - i)
            {
                cout << "*";
                j++;
            }

            cout << endl;
            i++;
        }
    }
    return 0;
}