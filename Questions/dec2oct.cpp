#include <iostream>
#include <cstring>

using namespace std;

void dec2oct(int n)
{
    int bin_arr[32];
    int count = 0;

    while (n > 0)
    {
        bin_arr[count] = n % 8;
        n /= 8;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        cout << bin_arr[i];
    }
}

int main() 
{
    int in;
    cin >> in;

    dec2oct(in);
    return 0;
}