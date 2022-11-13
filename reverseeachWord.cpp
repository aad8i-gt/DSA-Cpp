#include <iostream>
#include <cstring>

using namespace std;

void reverseEachWord(char a[])
{
    // Write your code here
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    int k = 0;
    int i = 0;
    int j = 0;

    while (j < len)
    {
        int k = 0;
        while (a[j] != ' ')
        {
            k++;
            j++;
        }

        int store = j; //preserving index
        j--;

        if (k % 2 == 0)
        {
            for (int z = 0; z < k / 2; z++)
            {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                i++;
                j--;
            }
        }

        else
        {
            for (int z = 0; z < (k / 2) + 1; z++)
            {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                i++;
                j--;
            }
        }

        j = store + 1;
        i = j;
    }
}

int main()
{

    return 0;
}