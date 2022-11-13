#include <iostream>
#include <cstring>

using namespace std;

int hex2dec(int n)
{

    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10;
        ans = ans + (y * x);
        n = n / 10;
        x = x * 8;
    }

    return ans;
}

int main()
{
    int num;
    cin >> num;

    cout << hex2dec(num);
    return 0;
}