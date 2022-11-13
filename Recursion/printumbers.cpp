#include <iostream>
#include <cstring>

using namespace std;

void printNum(int n)
{

    //base class
    if (n == 0)
        return;
    
    cout << n << " ";
    printNum(n-1);
    // if (n > 0)
    // {
    //     cout << n << " ";
    //     printNum(n - 1);

    // }
}

int main()
{
    int n;
    cin >> n;

    printNum(n);
    return 0;
}