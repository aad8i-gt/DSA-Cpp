#include <iostream>
#include <cstring>

using namespace std;

void Leaders(int *a, int len)
{
    int i = 0;
    while (i < len)
    {
        int j = i + 1;
        bool ans = false;
        while (j < len)
        {
            if (a[i] < a[j])
            {
                ans = true;
                break;
            }

            else
            {
                j++;
            }
        }
        if (ans == false)
        {
            cout << a[i] << " ";
        }
        i++;
    }
}

int main()
{
    int len;
    cin >> len;
    int *arr = new int[len + 1];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    Leaders(arr, len);
    return 0;
}