#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    int p = N;
    while (i <= N)
    {
        // int p = N;
        int j = N - i + 1;
        /* while (j > 0) 
        {
            cout << "*";

            j--;
        }*/

        /*while (p <= N)
        {
            cout << p;

            p++; 
        } */

        while (j > 0)
        {
            cout << p;
            j--;
        } 

        p--;
        cout << endl;
        i++;
    }

    return 0;
}