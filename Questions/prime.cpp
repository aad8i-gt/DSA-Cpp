#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "not prime";
            break;
        }
        else
        {
            cout << "prime";
            break;
        }
    }
    return 0;
}