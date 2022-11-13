#include <iostream>
#include <cstring>

using namespace std;
void printSubstrings(char a[])
{
    // Write your code here
    int len = strlen(a);

    int c = len;

    for (int z = 0; z < len; z++)
    {
        for (int i = z; i < len; i++)
        {
            for (int j = z; j <= i; j++)
            {
                cout << a[j];
            }
            cout << endl;
        }
    }
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
