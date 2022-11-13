#include <iostream>
#include <cstring>

using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int countZero = 0;
    int countOne = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (input[i] == 1) 
        {
            countOne++;
        }
        else if (input[i] == 0)
        {
            countZero++;
        }
    }
    // cout<<countZero<< "--" << countOne;

    for (int j = 0; j < countZero; j++)
    {
        input[j] = 0;
        count++;
    }

    for (int j = 0; j < countOne; j++)
    {
        input[count] = 1;
        count++;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        sortZeroesAndOne(input, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }
    return 0;
}