#include <iostream>
#include <cstring>

using namespace std;

int fact(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
} 

int main()
{
    int n, r;
    cin >> n >> r;

    //calculate nCr;
    int nCr = fact(n) / (fact(n - r) * fact(r));
    cout << nCr;

    return 0;
}   