#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N >= 0 && N <= 50)
    {
        int i = 1;
        while (i <= N)
        {
            int j = 1;
            int p = i;
            while (j <= i)
            {
                cout << p;
                j++;
                p--;
            }
            cout << endl;
            i++; 
        }
    }  

    return 0;
}