#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int r = pow(10, 9);

    if (N >= 0 && N <= r)
    {
        int lastDigit = 0;
        int ans = 0;
        int i = 0;

        while (N > 0)
        {
            lastDigit = N % 10;
            int p = pow(2, i);
            ans = ans + (lastDigit * p);
            i++;
            N /= 10;
        }

        cout << ans; 
    }
    return 0; 
}