#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i = 5;
    int j, p;

    while (i > 0)
    {
        j = 1;
        p = i;

        while (j <= 5)
        {
            if (p <= 5)
            {
                cout << p;
            }
            else
            {
                cout << 5;
            }
            p++;
            j++; 
        }
        cout << endl;
        i--;
    }
    return 0;
}