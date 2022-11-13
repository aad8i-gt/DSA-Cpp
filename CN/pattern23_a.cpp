#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N=9;
    

    int N1 = (N + 1) / 2;
    int N2 = N / 2;

    int i = 1;
    while (i <= N1)
    {
        int j = 1;
        while (j <= N1 - i)
        {
            cout << " ";
            j++;
        }

        j = 1;
        while (j < 2*i)
        {
            cout << j;
            j++;
        }

        /*j = 1;
        int p = i + 1;
        while (j <= i - 1)
        {
            cout << p;
            p++;
            j++;
        }*/ 

        i++;
        cout << endl;
    }

    i = 1;
    //i=5
    while (i <= N2)
    {
        int j = 1;
        while (j <= i)
        {
            cout << " ";
            j++;
        }

        j = 1;
        while(j<2*i)
        while (j <= N2 - i + 1)
        {
            cout << j;
            j++;
        }

        int p = 1;
        while (p <= N2 - i)
        {
            cout << j;
            j++;
            p++;
        }
        i++;
        cout << endl;
    }

    return 0;
}