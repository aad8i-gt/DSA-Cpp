
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 0;
    int j = 1;
    int sum = 0;

    for (int count = 0; count < N; count++)
    {
        sum = i + j;
        i = j;
        j = sum;
    }
    cout << i;

    return 0; 
}  