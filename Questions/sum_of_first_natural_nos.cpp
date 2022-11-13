#include <iostream>
#include <cstring>

using namespace std;

int sum_of_natural_nos(int n1)
{

    /* int ans = 0;
    for (int i = 1; i <= n; i++;)
    {
        ans += i;
    }*/
    int sum = (n1 * (n1 + 1)) / 2;
}

int main()
{
    int n;

    cin >> n;
    cout << "sum_of_natural_nos: "
         << sum_of_natural_nos(n);
    return 0;
}