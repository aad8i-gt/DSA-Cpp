#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int s = 0;
    int e = 4;

    cout << "original: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < 5; i++)
    {
        if (s < e)
        {
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;

            s++;
            e--;
        }
    }

    cout << endl;
    cout << "reverse: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << a[i] << " ";
    }

    return 0;
}