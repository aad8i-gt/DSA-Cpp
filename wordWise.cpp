#include <iostream>
#include <cstring>

using namespace std;

void reverseStringWordWise(char a[])
{
    int len = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    // reverse string
    for (int i = 0; i < (len / 2); i++)
    {
        char temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
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
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;

    return 0;
}

/* int count = 0;
    int start_index = 0;
    int end_index = 0;

    while (count < len)
    {

        int k = 0;
        while (a[count] != ' ')
        {
            //length
            count++;
            k++;
        }
        end_index = count;
        for (int z = 0; z < k / 2; z++)
        {
            char temp = a[start_index];
            a[start_index] = a[end_index];
            a[end_index] = temp;

            start_index++;
            end_index--;
        }
        
        count += 2;
        start_index = count;
    }*/