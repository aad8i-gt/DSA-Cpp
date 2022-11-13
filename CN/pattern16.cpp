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
        int j = 1;
        while (j <= N - i)
        {
            cout << " ";
            j++;
        }

        j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        j = 1;
        int temp = i-1; 
        while (j <= i - 1)
        {
            cout << temp;
            temp--; 
            j++; 
        } 

        cout << endl;
        i++;
    }

    return 0;
}