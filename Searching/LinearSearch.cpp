#include<iostream>

using namespace std;

int LinearSearch(int input[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key == input[i])
            return i;
    }

    return -1;
}

int main()
{
    int n = 6;
    int arr[n] = {4, 2 , 100, 54, 87, 36};
    int key = 54;

    cout << LinearSearch(arr, n, key) << endl;
    return 0;
} 