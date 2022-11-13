#include <iostream>
#include <cstring>
//extra
using namespace std;

void dec2bin(int x)
{
    int count = 0;
    int bin_arr[32];

    while (x > 0)
    { 
        bin_arr[count] = x % 2;
        x /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        cout << bin_arr[i];
    } 
}

int main()
{
    int n;
    cin >> n;

    dec2bin(n);

    return 0;
}


/*
dec2bin(int n)
{
    int x = 1;
    int ans = 0;

    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}
*/