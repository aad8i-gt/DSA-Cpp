#include <iostream>
#include <cstring>

using namespace std;

int hexa2dec(string s)
{
    int ans = 0;

    int len = s.length();
    int exp = 1;

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
            //greater than 48, less than 55

            ans = ans + exp * (int(s[i]) - 48);

        else
            ans = ans + exp * (int(s[i]) - 55);

        exp *= 16;
    }

    return ans;
}

int main()
{
    string n = "A13";

    cout << hexa2dec(n);
    return 0;
}