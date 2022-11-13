#include <iostream>
#include <cstring>

using namespace std;

bool pythagorean_triplet(int a, int b, int c)
{
    int a1, b1, c1;
    a1 = max(a, max(b, c));

    if (a1 == a)
    {
        b1 = b;
        c1 = c;
    }

    else if (a1 == b)
    {
        b1 = a;
        c1 = c;
    }

    else
    {
        b1 = a;
        c1 = b;
    }

    if (a1 * a1 == b1 * b1 + c1 * c1)
    {
        return true;
    }
    else
        return false;
} 

int main()
{
    int x, y, z;

    cin >> x >> y >> z;
    if (pythagorean_triplet(x, y, z))
    {
        cout << "Pythagorean Triplet";
    }
    return 0;
}

