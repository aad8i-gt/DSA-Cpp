#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;

    if (N >= 0 && N <= 50)
    {
        while (i <= N)
        {
            int p = 1;
            int j = 1;
            while (j <= N - i)
            {
                cout << " ";
                j++; 
            }

            while (j <= N)
            {
                cout << p;
                j++;
                p++;
            }
            
            cout << endl;
            i++;
        }
    }
    return 0;
}