#include <iostream>
#include <cstring>

using namespace std;

int factorial(int num)
{

    int factorial = 1;

    for (int i = num; i>0; i--) 
    {
        factorial = num * factorial;
        num--; 

    }

    return factorial;
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n);
    return 0;
} 