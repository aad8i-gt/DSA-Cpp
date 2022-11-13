#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int i = 1;
    int count = 1; 

    while (count <= x)
    {
        int ans = 3 * i + 2;

        if (ans % 4 != 0)
        {
            cout << ans << " ";
            i++;
            count++;
        }

        else
        {
            i++; 
        }
    }

    return 0;
}