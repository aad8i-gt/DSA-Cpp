#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int rem;
    while (num > 0)
    {

        rem = num % 10;
        num = num / 10;
        cout << rem;
    }
    return 0;
} 