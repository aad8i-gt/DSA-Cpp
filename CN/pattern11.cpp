#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N >= 0 && N <= 26)
    {
        char ch = 'A';
        int i = 1;
        while (i <= N)
        {
            int j = 1;
            while (j <= i)
            {
                cout << ch;
                j++;
            }
            ch++;
            cout << endl;
            i++;
        }
    }

    return 0;
}