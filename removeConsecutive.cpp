#include <iostream>
#include <cstring>

using namespace std;

void removeConsecutiveDuplicates(char a[])
{
    // Write your code here
    int n = strlen(a);
    int c = 0;
    int i = 0;

    while (i < n)
    {
        if (a[i] == a[i + 1])
        {
            i++;
        }

        else
        {
            a[c] = a[i];
            c++;
            i++;
        }
    }

    for (int i = c; i < n; i++)
    {
        a[i] = ' ';
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
    return 0;
}