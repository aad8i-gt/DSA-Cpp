#include <iostream>
#include <cstring>

using namespace std;

string getCompressedString(string &a)
{

    int n = 0;

    // length
    for (int i = 0; a[i] != '\0'; i++)
    {
        n++;
    }

    // desired output
    int i = 0;
    int c = 0;
    int k = 0;

    for (; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            k++;
        }
        else
        {
            a[c] = a[i];
            if (k != 0)
            {
                a[c + 1] = 49 + k;
                c += 2;
            }

            else
                c++;

            k = 0;
        }
    }

    for (; c < n; c++)
    {
        a[c] = ' ';
    }

    return a;
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
    return 0;
}