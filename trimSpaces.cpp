#include <iostream>
#include <cstring>

using namespace std;

void trimSpaces(char a[])
{
    // Write your code here
    int n = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        n++;
    }

    int i = 0;
    int j = 0;
    while (i <= n)
    {
        if (a[j] != ' ')
        {
            a[i] = a[j];
            j++;
            i++;
        }

        else
        {
            j++;
        }
    }
}

int main()
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
