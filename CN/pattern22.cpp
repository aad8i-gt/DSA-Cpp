#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;

    while (i <= N)
    {
        int j = 1;
        while (j <= N - i + 1)
        {
            cout << j;
            j++;
        }

        j = 1;
        while (j <= i - 1)
        {
            cout << "**";
            j++;
        }

        j = 1;
        int p = N - i + 1;
        while (j <= N - i + 1)
        {
            cout << p;
            p--;
            j++;
        }

        i++;
        cout << endl;
    }
    return 0;
}