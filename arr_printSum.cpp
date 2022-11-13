#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int r = pow(10,6);

    if(N>=0 && N<= r)
    {
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            // cout << "Enter element " << i << ": ";
            cin >> arr[i];
        }

        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            sum = sum + arr[j];
        }

        cout << sum;
    }
    return 0;
}