#include <iostream>
using namespace std;

void dec2hexa(int num)
{

    int i = 0;
    char ans[100];

    while (num != 0)
    {
        int rem = 0;
        rem = num % 16;

        if (rem < 10)
            ans[i] = rem + 48;
        else
            ans[i] = rem + 55;

        num = num / 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << ans[j];
}

int main()
{
    int n = 2545;

    dec2hexa(n);
    return 0;
}