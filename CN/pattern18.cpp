#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N >= 0 && N <= 50)
    {
        int i = 1;

        while (i <= N)
        {
            int p = i;
            int j = 1;
            while (j <= N - i)
            {
                cout << " ";
                j++;
            }

            j = 1;
            while (j <= i)
            {
                cout << p;
                j++;
                p++;
            }

            j = 1;
            p--;
            int temp = i - 1;
            while (j <= temp)
            {
                p = p - 1;
                cout << p;
                j++;
            }

            i++;
            cout << endl;
        }
    }

    return 0;
}