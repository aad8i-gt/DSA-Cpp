#include <iostream>
#include <climits>

using namespace std;

int main() 
{
    int N; 
    cin >> N;

    int arr[10];

    for (int i = 0; i < N; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int max = INT_MIN;
    int j = 1;
    while (j <= N - 1)
    {
        if (max < arr[j])
        {
            max = arr[j];
            j++;
        }
 
        else
            j++;
    }

    cout << "MAX ELEMENT: " << max << endl;
    return 0;
}  