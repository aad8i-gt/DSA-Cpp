#include <iostream>

using namespace std;

int main()
{
    int S, E, W;
    cin >> S >> E >> W;

    int i = S;

    if (S >= 0 && S <= 90 &&
        E >= S && E <= 900 &&
        W >= 0 && W <= 80)
    {
        while (i <= E)
        {
            cout << i << " ";
            cout << (5 * (i - 32)) / 9 << endl;
            i += W;
        }
    }

    return 0;
}