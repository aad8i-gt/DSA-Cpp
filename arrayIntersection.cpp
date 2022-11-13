#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a1[4] = {2, 4, 5, 7};
    int a2[5] = {1, 0, 5, 7, 4};
    int size1 = 4;
    int size2 = 5;

    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {

        if (a1[i] < a2[j])
            i++;
        else if (a1[i] == a2[j])
        {
            cout << a1[i] << " ";
            i++;
            j++;
        }

        else if (a1[i] > a2[j])
            j++;
    }

    //     // if (size1 > size2)
    //     // {
    //     for (int i = 0; i < size1; i++)
    //     {
    //         int elem = a1[i];
    //         for (int j = 0; j < size2; j++)
    //         {
    //             if (elem == a2[j])
    //             {
    //                 a2[j] = INT_MIN;
    //                 cout << elem << " ";
    //             }
    //         }
    //     }

    //     cout << endl;
    //     // }
    // }

    return 0;
}