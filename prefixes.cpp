#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[10];
    cin >> str;

    int len = strlen(str);

    int j = len;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }

    /*while (j > 0)
    {
        int i = 0;
        while (i < j)
        {
            cout << str[i];
            i++;
        }
        cout << endl;
        j--;
    }*/

    return 0;
}