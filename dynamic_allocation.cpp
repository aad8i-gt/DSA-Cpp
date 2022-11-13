#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Dynamic Allocation
    int *p = new int;
    // int *p = new int[10];
    *p = 10;
    cout << *p << endl;
    cout << p << endl;
    delete p;
    // delete[] p;
    cout << *p << endl;
    cout << p << endl;

    return 0;
}