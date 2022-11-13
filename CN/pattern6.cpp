#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    while (i <= N)
    {
        int j = N;
        //int j=1
        while (j > 0)
        {
            cout << j;
            //cout << n-j+1;
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
} 