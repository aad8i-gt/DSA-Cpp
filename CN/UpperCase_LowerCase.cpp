#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    //uppercase
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << 1 << endl;
    }

    //lowercase
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << 0 << endl;
    }

    //invalid
    else
    {
        cout << -1 << endl;
    }
}