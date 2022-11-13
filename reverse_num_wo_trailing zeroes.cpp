#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 11040000;
    // cin >> num;

    int i = 0;
    int rem = 0;
    int arr[32];

    int r = pow(10, 8);

    if (num >= 0 && num <= r)
    {
        while (num > 0)
        {
            rem = num % 10;
            arr[i] = rem;
            num /= 10;
            i++;
        }

        bool ans = false;
        for (int j = 0; j <= i - 1; j++)
        {

            if (ans || arr[j] != 0)
            {
                cout << arr[j];
                ans = true;
            }

            else if (arr[j] == 0 && ans == false)
                continue;
        }
    }
    return 0;
}