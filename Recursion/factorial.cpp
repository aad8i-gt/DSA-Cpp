#include <iostream>
#include <cstring>

using namespace std;

int fact(int n)
{

    if (n == 0)
        return 1;

    int smallP = fact(n - 1);

    return n * smallP;
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << " ";
    return 0;
}