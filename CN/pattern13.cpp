#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    
    if (N >= 0 && N <= 26)
    {

        int i = 1;
        while (i <= N)
        {
            int j = 1;
            char temp = 'A' + N - 1;
            char ch = temp - i + 1;
            while (j <= i)
            {
                cout << ch;
                ch++;
                j++;
            }

            cout << endl; 
            i++;
        }
    }

    return 0;
}