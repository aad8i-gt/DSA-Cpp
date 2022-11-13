#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //2D ARRAY

    int test[2][3] = {{1, 2, 3}, //Total elements=2*3=6
                      {4, 5, 6}};

    //3D ARRAY

    int test2[2][3][4] = {{{1, 2, 3, 4}, //Total elements=2*3*4=24
                           {5, 6, 7, 8},
                           {9, 10, 11, 12}},
                          {{13, 14, 15, 16},
                           {17, 18, 19, 20},
                           {21, 22, 23, 24}}};

    // Since it's an array, index starts from 0.
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << "test"
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << " = " << test[i][j] << endl;
        }
    }
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int z = 0; z < 4; z++)
            {
                cout << "test"
                     << "[" << i << "]"
                     << "[" << j << "]"
                     << "[" << z << "]"
                     << " = " << test2[i][j][z] << endl;
            }
        }
    }

    return 0;
}