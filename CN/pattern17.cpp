#include <iostream>

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
            while (j <= N - i)
            {
                cout << " ";
                j++;
            }

            j = 1; 
            while (j <= i)
            {
                cout << "*";
                j++;
            }

            j = 1;
            int temp = i - 1;
            while (j <= temp)
            {
                cout << "*";
                j++;
            } 

            cout << endl;
            i++;
        }
    }

    return 0; 
}