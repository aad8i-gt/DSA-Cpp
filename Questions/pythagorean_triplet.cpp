#include <iostream>
#include <cstring>

using namespace std;

bool pythagorean_triplet(long a1, long b1, long c1)
{

    long LHS = a1 * a1 + b1 * b1;
    long RHS = c1 * c1;
    if (LHS == RHS)
    {
        return true;
    } 

    else
    {
        return false;
    }
}

int main()
{
    long a, b, c;

    cin >> a >> b >> c;

    if(pythagorean_triplet(a, b, c)) {
        cout << "Pythagorean Triplet";
    }
    return 0;
} 