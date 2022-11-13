#include <iostream>
#include <cstring>

using namespace std;

bool checkPalindrome(char str[])
{
    // Write your code here

    int n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str[(n - 1) - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");

    return 0;
}