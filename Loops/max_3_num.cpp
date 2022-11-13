#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c;
        }
    } 

    if (b > a)
    {
        if (b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c;
        }
    } 84
    /* int max = a;
    if (max < b)
    {
        max = b;
    } 
    else if (max < c) {
        max = c; 
    }

    cout << max;*/

    return 0;
}