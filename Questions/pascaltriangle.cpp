#include <iostream>
#include <cstring>

using namespace std;

int fact(int num)
{
    int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int iCr = fact(i) / (fact(i - j) * fact(j));
            cout << iCr << " ";
        } 

        cout << endl; 
    }
    return 0;
}