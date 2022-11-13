#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c;
    int count_alpha = 0;
    int count_digit = 0;
    int count_char = 0;

    while (c != '$')
    {
        c = cin.get();
        if (c >= 'a' && c <= 'z')
        {
            count_alpha++;
        }
        else if (c >= '0' && c <= '9')
        {
            count_digit++;
        }
        else if (c == '\t' || c == '\n' || c == ' ')
        {
            count_char++;
        }
    }

    cout << count_alpha << " "
         << count_digit << " "
         << count_char;

    return 0;
}