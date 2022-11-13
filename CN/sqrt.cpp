#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 0 && x <= pow(10, 8))
    {
        int ans = sqrt(x);
        cout << ans << endl;
    }

    return 0;
} 