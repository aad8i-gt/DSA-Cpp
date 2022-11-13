#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    while (i <= N)
    {
        int j = 1;
        int toPrint = i;
        int z = N;
        while (z - i > 0)
        {
            cout << " ";
            z--;
        }
        while (j <= i)
        {
            cout << toPrint;
            j++; //j=j+1
            toPrint++;
        }
        i++;

        cout << endl;
    }

    return 0;
}