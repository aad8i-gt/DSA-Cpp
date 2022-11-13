#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    while (i <= N)
    {
        int j = 1;
        int p = i;
        while (j <= i)
        {
            cout << p;
            p++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}