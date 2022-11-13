#include <iostream>
#include <cstring>

using namespace std;

//Prototyping
int sum(int, int);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << sum(a, b);
    return 0;
}

int sum(int x, int y)
{
    return x + y;
} 