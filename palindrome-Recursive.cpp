#include <iostream>
using namespace std;

bool checkPalindrome(string a, int s, int e)
{
    if (s > e)
        return true;

    if (a[s] != a[e])
        return false;

    else
        checkPalindrome(a, ++s, --e);
}

int main()
{
    string a = "abcdefgh";
    int len = a.length();
    bool ans = checkPalindrome(a, 0, len - 1);

    if (ans)
    {
        cout << "TRUE" << endl;
    }

    else
    {
        cout << "FALSE" << endl;
    }
    return 0;
}