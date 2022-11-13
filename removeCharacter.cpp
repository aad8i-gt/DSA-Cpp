#include <iostream>
#include <cstring>

using namespace std;

void removeAllOccurrencesOfChar(char a[], char x)
{
    // Write your code here
    int n = strlen(a);
    char b[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
        {
            b[c] = a[i];
            c++;
        }
    }

    for (int i = 0; i < c; i++)
    {
        a[i] = b[i];
    }

    a[c] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
    return 0;
}