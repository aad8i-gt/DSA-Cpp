#include <iostream>
#include <cstring>

using namespace std;

#define PI 3.14
int global = 54;

void f()
{
    global++;
    cout << global << endl;
}

int main()
{
    int r = 10;
    global = 4;
    cout << PI * r * r << endl;
    f();
    cout << global << endl;
    return 0;
}