#include <iostream>
#include <cstring>

using namespace std;

void reverse(char c[])
{
    int n = 0;
    char x;

    for (int i = 0; c[i] != '\0'; i++)
    {
        n++;
    }

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        x = c[i];
        c[i] = c[n - 1 - i];
        c[n - 1 - i] = x;

        i++;
        j--;
    }
    // for (int i = 0; i < n / 2; i++)
    // {
    //     x = c[i];
    //     c[i] = c[n - 1 - i];
    //     c[n - 1 - i] = x;
    // }
    /*
    char x[n];

    for (int i = 0; i < n; i++)
    {
        x[i] = c[n - 1 - i];
    }
*/
    for (int i = 0; c[i] != '\0'; i++)
    {
        cout << c[i];
    }
}
int main()
{
    char a[15];
    cin.getline(a, 15);

    reverse(a);
    return 0;
}