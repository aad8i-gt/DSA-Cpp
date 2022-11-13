#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[5] = {1, 2, 3, 2, 4};
        int size = 5;
        int ans = 0;

        for (int i = 0; i < size; i++)
        {
            ans = ans ^ a[i];
        }

        for (int i = 1; i < size; i++)
        {
            ans = ans ^ 1;
        }

        cout << ans << endl;
    }
    return 0;
}
