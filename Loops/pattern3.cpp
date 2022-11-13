#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) //5 4 3 2 1
        {
            cout << "*"; 
        } 

        cout << endl; 
    } 


    return 0;
}
 

