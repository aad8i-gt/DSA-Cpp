#include <iostream>
#include <cstring>
using namespace std;

bool linearSearch(int *a, int size, int key)
{
    if (size == 0)
        return false;

    if (a[0] == key)
        return true;

    else
    {
        linearSearch(a + 1, --size, key);
    }

    //------------
    // if (size == 1) 
    // {
    //     if (a[0] == key)
    //         return true;

    //     else
    //         return false;
    // }

    // if (a[0] == key)
    //     return true;

    // linearSearch(a + 1, --size, key);
};
int main()
{
    int size = 5;
    int a[size] = {10, 4, 7, 8, 3};
    int key = 32;

    cout << linearSearch(a, size, key);
    return 0;
}