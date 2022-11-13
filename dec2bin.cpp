#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int r = pow(10, 5);

    if (N >= 0 && N <= r)
    {
        int rem = 0;
        int ans[32];
        int i = 0;

        if (N == 0)
        {
            cout << 0;
            return 0; 
        }
 
        else 
        {
            while (N > 0)
            {
                rem = N % 2; 
                ans[i] = rem;
                N = N / 2;
                i++;
            }
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << ans[j];
        }
    }
    return 0;
}