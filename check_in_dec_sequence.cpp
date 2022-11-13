#include <iostream>
using namespace std;

int main()
{
    //array size
    int N;
    cin >> N;

    int arr[N];

    //storing elements in array
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    //storing difference of consecutive elements in arrayCheck
    int arrayCheck[N - 1];
    int diff = 0;
    for (int i = 0; i < N - 1; i++)
    {
        diff = arr[i] - arr[i + 1];

        //this means two digits are same 
        // which means neither decreasing nor increasing
        if (diff == 0)
        {
            cout << "false";
            return 0;
        }

        arrayCheck[i] = diff;
    }

    int count = 0;
    for (int i = 0; i < N - 2; i++)
    {
        if ((arrayCheck[i] > 0 && arrayCheck[i + 1] < 0) ||
            (arrayCheck[i] < 0 && arrayCheck[i + 1] > 0))
        {
            count++;
        }
    }

    //count is >= 2 that means in arrayCheck, we can two consecutive
    //pairs with different sign (+/-)
    if (count >= 2)
        cout << "false";

    else
        cout << "true";

        return 0;
} 