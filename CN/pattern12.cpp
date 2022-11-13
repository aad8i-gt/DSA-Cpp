#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N >= 0 && N <= 13)
    {
        int i = 1;
        while (i <= N)
        {
            char ch = 'A'+i-1; 
            int j = 1;
            while (j <= i)
            {
                cout << ch;
                j++;
                ch++; 
            }

            cout << endl;
            i++;
        }
    }

    return 0;
}