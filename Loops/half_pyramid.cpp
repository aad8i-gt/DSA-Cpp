#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    /*for (int j = 1; j <= n; j++)  
    {
        for (int i = 1; i <= (n-j) + 1; i++)
        {
            cout << "*";
        } 
        cout << endl; 
        
        
    } */

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl; 
    }

    return 0; 
}