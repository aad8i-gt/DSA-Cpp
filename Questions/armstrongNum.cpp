#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int copy = num;
    int sum = 0;
    
    int rem;
    while (num > 0)
    { 
        rem = num % 10;
        // sum = sum + (rem * rem * rem);
        sum = sum + pow(rem, 3);
        num = num / 10;
    }
    if (copy == sum)
    {
        cout << "Given number is armstrong";
    }
    else
    {
        cout << "Not armstrong!";
    }
    return 0;
}